

// 35. Write a program in C to find the largest sum of contiguous subarrays in an array.
// Expected Output :
// The given array is : 8 3 8 -5 4 3 -4 3 5
// The largest sum of contiguous subarray is : 21
// Click me to see the solution

#include <stdio.h>
int main()
{
    int i, j, z, b, c = 1, given, sum = 8, Big, temp = 0;
    printf("Enter the total number of elements :");
    scanf("%d", &given);
    int arr1[given], arr2[given], arr3[given];

    for (i = 0; i < given; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("The given array is : ");
    for (i = 0; i < given; i++)
    {
        printf("%d ", arr1[i]);
    }


    for (i = 0; i < given; i++)
    {
        for (j = i + 1; j < given; j++)
        {
            if (temp == 0)
            {
                sum = arr1[i];
            }
            Big = arr1[0];
            if (Big < arr1[i])
                Big = arr1[i];

            sum = sum + arr1[j];

            if (Big < sum)
                arr1[0] = sum;
            else
                arr1[0] = Big;
            temp++;
        }
        temp = 0;
    }
    printf("\nThe largest sum of contiguous subarray is : %d", arr1[0]);
    return 0;
}

// wrong understanding sum solved

//     for (i = 0; i < given; i++)
//     {
//         tempindex = 0;
//         for (j = 0; j < given; j++)
//         {
//             if (i != j)
//             {
//                 temp = arr1[i] + arr1[j];
//                 arr2[tempindex] = temp;
//                 tempindex++;
//                 printf(" %d adn %d  %d", arr1[i], arr1[j],tempindex);
//             }
//             printf("\n a \n ");
//         }

//         for (z = 0; z < tempindex; z++)
//         {

//             printf("%d ", arr2[z]);
//         }
//         printf("\n v \n ");

//         Big = arr2[0];
//         for (z = 1; z < tempindex; z++)
//         {
//             if (Big < arr2[z])
//             {
//                 Big = arr2[z];
//             }
//         }
//         arr3[i] = Big;
//     }

//     for (b = 0; b < given; b++)
//     {
//         printf("%d ", arr3[b]);
//     }

//     Big = arr3[0];
//     for (i = 1; i < given; i++)
//     {
//         if (Big < arr3[z])
//         {
//             Big = arr1[z];
//         }
//     }
//     printf("The largest sum of contiguous subarray is : %d", Big);
//     return 0;
// }
