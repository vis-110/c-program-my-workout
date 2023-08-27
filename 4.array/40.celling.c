
// 40. Write a program in C to find the ceiling in a sorted array.
// 	N.B.: Given a sorted array in ascending order and a value x, the ceiling of x is the smallest element in array greater than or equal to x, and the floor is the 	greatest element smaller than or equal to x.
// 	Expected Output :
// 		Expected Output :
// The given array is : 1 3 4 7 8 9 9 10
// The ceiling of 5 is: 7

#include <stdio.h>
int main()
{
    int i, given, ceiling;
    printf("Enter the no of element : ");
    scanf("%d", &given);
    int arr[given];

    for (i = 0; i < given; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The given array is :");
    for (i = 0; i < given; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nThe ceiling value is :");
    scanf("%d", &ceiling);

    for (i = 0; i < given; i++)
    {
        if (ceiling == arr[i])
        {
            printf("\nThe ceiling of %d is : %d", ceiling, arr[i]);
            break;
        }
        else if (ceiling < arr[i])
        {
            printf("\nThe ceiling of %d is : %d", ceiling, arr[i]);
            break;
        }
    }

    return 0;
}