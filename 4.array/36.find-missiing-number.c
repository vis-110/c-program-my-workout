
// 36. Write a program in C to find the missing number in a given array. There are no duplicates in the list.
// Expected Output :
// The given array is : 1 3 4 2 5 6 9 8
// The missing number is : 7


#include <stdio.h>
int main()
{
    int i, j, small, big, temp = 0, given;
    printf("Enter no of elements\n");
    scanf("\n%d", &given);
    int arr[given];
    printf("The Given array is :\n");

    for (i = 0; i < given; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < given; i++)
    {
        if (arr[0] > arr[i])
        {
            arr[0] = arr[i];
        }
    }
    small = arr[0];

    for (i = 0; i < given; i++)
    {
        if (arr[given-1] < arr[i])
        {
            arr[given-1] = arr[i];
        }
    }
    big = arr[given-1];


    for (i = small; i <= big; i++)
    {
        for (j = 0; j < given; j++)
        {
            if (arr[j] == i){
                break;
            }
            else
            {
                temp++;
            }
        }
        if (temp == given)
            printf("The missing number is : %d\n", i);
        temp = 0;
    }
    return 0;
}