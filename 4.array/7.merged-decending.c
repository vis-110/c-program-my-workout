 
// Assending Order

    #include <stdio.h>
    int main()
    {
        int i, given, temp, j;

        printf("Input the number of elements to store in the first array : \n");
        scanf("%d", &given);

        int merarr = (given + given);

        int fArray[given], sArray[given], marray[merarr];
        
        printf("Input %d elements in the array: \n", given);
        for (i = 0; i < given; i++)
        {
            printf("element - %d : ", i);
            scanf("%d", &fArray[i]);
        }

        printf("Input the number of elements to store in the second array : \n");
        scanf("%d", &given);
        printf("Input %d elements in the array: \n", given);
        for (i = 0; i < given; i++)
        {
            printf("element - %d : ", i);
            scanf("%d", &sArray[i]);
        }

        for (i = 0; i < given; i++)
        {
            marray[i] = fArray[i];
        }

        for (j = 0; j < given; j++)
        {
            marray[i + j] = sArray[j];
        }

        printf("The Merged array in Decending Order is - ");
        for (i = 0; i < merarr - 1; i++)
        {
            for (j = i + 1; j < merarr; j++)
            {
                if (marray[i] < marray[j])
                {
                    temp = marray[i];
                    marray[i] = marray[j];
                    marray[j] = temp;
                }
            }
        }
        for (i = 0; i < merarr; i++)
        {
            printf(" %d ", marray[i]);
        }
        return 0;
    }