#include <stdio.h>
int main()
{
    int i, j, given, c = 0, search, midElement, midValue, rightElement, leftElement;
    printf("Enter the no.of elements : ");
    scanf("%d", &given);
    int arr1[given];
    for (i = 0; i < given; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("The Given element is : ");
    for (i = 0; i < given; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("search value : ");
    scanf("%d", &search);

    midElement = (given / 2);
    leftElement = midElement;
    rightElement = given - midElement;
    printf(" rightElement - %d\n", rightElement);
    printf(" leftElement - %d\n", leftElement);

    for (i = 0; i < given; i++)
    {
        if (midElement == i)
        {
            printf("%d ", arr1[i]);
            midValue = i;
        }
    }

    if (midValue < search)
    {
        for (i = 1; i <= rightElement; i++)
        {
            if (search == (midElement + i))
            {
                printf("In this binary searching element : %d",arr1[midValue+1]);
            }
           
        }
    }
    else
    {
        for (i = 1; i <= leftElement; i++)
        {
            if (search == midElement + i)
            {
            }
            else
            printf(" 1 In this binary searching not searching element");
        }
    }
}