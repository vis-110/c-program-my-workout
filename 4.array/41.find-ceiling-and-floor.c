#include <stdio.h>
int main()
{
    int i, j, given,sum,sub;
    printf("Enter number of elements in the array : ");
    scanf("%d", &given);
    int arr[given];

    for (i = 0; i < given; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The given array is : ");
    for (i = 0; i < given; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i <= 10; i++)
    {
        for (j = 0; j < given; j++)
        {
            if (i == arr[j])
            {
                printf("Number : %d ceiling : %d floor : %d \n", i, arr[j], arr[j]);
                break;
            }
        }
        sum = i+1;
        sub = i-1;
        if (j == given)
            printf("Number : %d ceiling : %d floor : %d \n", i, sum, sub);
    }
 
    return 0;
}