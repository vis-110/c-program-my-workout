
    // Assending Order

    #include <stdio.h>
    int main()
    {
        int i, given, temp, j;
        printf("Input the number of elements to store in the array : ");
        scanf("%d", &given);
        int array[given];
        for (i = 0; i < given; i++) 
        {
            printf("element - %d : ", i);
            scanf("%d", &array[i]);
        }
        printf("Assending Orders - ");
        for (i = 0; i < given ; i++)
        {
            for (j = i + 1; j < given; j++)
            {
                if (array[i] >array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        for (i = 0; i < given; i++)
        {
            printf("%d ", array[i]);
        }
        return 0;
    }