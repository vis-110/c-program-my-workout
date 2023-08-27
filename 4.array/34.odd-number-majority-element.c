

// 34. Write a program in C to find the number occurring odd number of times in an array.
// 	All numbers occur even number of times except one number which occurs odd number of times.
// 	Expected Output :
// 	The given array is : 8 3 8 5 4 3 4 3 5
// 	The element odd number of times is : 3

    #include <stdio.h>
    int main()
    {
        int i, j, z, c = 0, given, v = 0, temp = 0;
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

                if (c % 2 != 1)
                {
                    arr2[v] = arr1[i];
                    v++;
                }
            }
            c = 0;
            temp = 0;
        }

        if (v == 0)
        {
            printf("There are no majority elemment in the given array \n");
        }
        else
        {
            printf("Odd number majority element : ");
            for (i = 0; i < v; i++)
            {
                printf("%d ", arr2[i]);
            }
        }
        return 0;
    }