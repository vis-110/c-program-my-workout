#include <stdio.h>
int main()
{
    int i, j, given, c = 0, range, position;
    printf("Enter the no.of elements : ");
    scanf("%d", &given);
    int arr1[given], arr2[given];
    for (i = 0; i < given; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("The Given element is : ");
    for (i = 0; i < given; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("position in the array : ");
    scanf("%d", &position);

    range = given - position;

    for (i = position; i < given; i++)
    {
        arr2[i] = arr1[i];
    }

    for (i = 0; i < position; i++)
    {
        arr2[i] = arr1[i];
    }
    for (i = 0; i < given; i++)
    {
        if (position <= i)
        {
            arr1[c] = arr2[i];
            c++;
        }
        else
            arr1[range + i] = arr2[i];
    }

    printf("The rotate array is : ");
    for (i = 0; i < given; i++)
    {
        printf("%d ", arr1[i]);
    }
}