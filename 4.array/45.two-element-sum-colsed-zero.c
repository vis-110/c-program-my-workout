// #include <stdio.h>
// int main()
// {
//     int i, j, z, smallval, temp = 0, temp2 = 0, given, sum, positive, negative;
//     printf("Enter no of elements : ");
//     scanf("%d", &given);
//     int arr[given];

//     for (i = 0; i < given; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("The Given array is : ");
//     for (i = 0; i < given; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     negative = -10;
//     positive = 10;
//     lable:
//     for (i = 0; i < given; i++)
//     {
//         for (j = 0; j < given; j++)
//         {
//             if (i != j)
//             {
//                 sum = arr[i] + arr[j];
//                 if (temp > 1 || 0 >= temp )
//                 {
//                     if (smallval == sum)
//                     {
//                         printf("The pare of element where sum is mininum are : %d , %d\n", arr[i], arr[j]);
//                         return 0;
//                     }
//                     else
//                         break;
//                 }
//                 if (0 < sum)
//                 {

//                     if (positive > sum){
//                         positive = sum;
//                         printf(" negative %d ", positive);
//                     }
//                 }
//                 else
//                 {

//                     if (negative > sum){
//                         negative = sum;
//                         printf(" positive %d ", negative);
//                     }
//                 }
//             }
//         }
//          printf("The pare of element where sum is 2 \n");
//          sum =0;
//     }

//     for (z = 0; z< positive; z++)
//     {
//         temp++;
//     }

//     for (z = negative; 0 > z; z++)
//     {
//         temp2++;
//     }

//     if (temp > temp2)
//     {
//         smallval = negative;

//     }
//     else
//     {
//         smallval = positive;

//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j = -20, k, arr[5];

//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (i = 0; i < 5; i++)
//     {
//         if (0 > arr[i])
//         {
//             k = (-1 * arr[i]);
//             printf(" k1 = %d ", k);
//         }
//         else
//         {
//             printf(" k2 = %d ", arr[i]);
//         }
//     }
//     return 0;
// }

	// The given array is : 38 44 63 -51 -35 19 84 -69 4 -46

    #include <stdio.h>
    int main()
    {
        int i, j, given, sum, near, index1, index2;
        printf("Enter no of elements : ");
        scanf("%d", &given);
        int arr[given];

        for (i = 0; i < given; i++)
        {
            scanf("%d", &arr[i]);
        }

        near = arr[0] + arr[1];
        index1 = 0;
        index2 = 1;
        printf("The Given array is : ");
        for (i = 0; i < given; i++)
        {
            printf("%d ", arr[i]);
        }

        for (i = 0; i < given; i++)
        {
            for (j = i+1; j < given; j++)
            {

                sum = arr[i] + arr[j];
                if (0 > sum)
                {
                    sum = (-1 * sum);
                }
                if (near > sum)
                {
                    near = sum;
                    index1 = i;
                    index2 = j;
                }
            }
        }

        printf("\nThe pare of element where sum is mininum are : %d , %d\n", arr[index1], arr[index2]);

        return 0;

    }

    Enter no of elements : 10
    38
    44
    63
    -51
    -35
    19
    84
    -69
    4
    -46
    The Given array is : 38 44 63 -51 -35 19 84 -69 4 -46  
    The pare of element where sum is mininum are : 44 , -46