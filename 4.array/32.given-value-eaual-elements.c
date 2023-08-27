// 32. Write a program in C to find a pair with given sum in the array.
// 	Expected Output :
// 	The given array : 6 8 4 -5 7 9
// 	The given sum : 15
// 	Pair of elements can make the given sum by the value of index 0 and 5

#include <stdio.h>
int main()
{
    int i, j, given, sum = 0, givensum;
    printf("Enter the total number of elements :");
    scanf("%d", &given);
    int arr[given];

    for (i = 0; i < given; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The given array : ");
    for (i = 0; i < given; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n The given sum :");
    scanf("%d", &givensum);

    for (i = 0; i < given; i++)
    {
        for (j = 0; j < given; j++)
        {
            if (i != j)
                sum = arr[i] + arr[j];

            if (givensum == sum)
            {
                printf("Pair of elements can make the given sum by the value index %d and %d ", arr[i], arr[j]);
                return 0;
            }
        }
    }

    return 0;
}