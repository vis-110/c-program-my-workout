
// 33. Write a program in C to find the majority element of an array.
// 	A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).
// 	Expected Output :
// 	The given array is : 4 8 4 6 7 4 4 8
// 	There are no Majority Elements in the given array.

#include <stdio.h>
int main()
{
    int i, j, z, c = 1, given,  temp = 0;
    printf("Enter the total number of elements :");
    scanf("%d", &given);
    int arr1[given], arr2[given];

    for (i = 0; i < given; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < given; i++)
    {
        for (z = i; z >= 0; z--)
        {
            if (i != z)
            {
                if (arr1[i] == arr1[z])
                {
                    temp++;
                }
            }
        }
        if (temp == 0)
        {
            for (j = 0; j < given; j++)
            {
                if (i != j)
                { 
                    if (arr1[i] == arr1[j])
                        c++;
                }
            }
        }
            if (c > (given / 2)){ 
                printf("The majority element in the given array is : %d \n", arr1[i]);
                return 0;
            }
        
        c = 1;
        temp = 0;
    }
    printf("There are no majority elemment in the given array \n");
    return 0;
}