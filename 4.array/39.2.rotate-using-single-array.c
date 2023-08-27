    #include <stdio.h>
    int main()
    {
        int i, j, given, position, temp;
        printf("Enter the no.of elements : ");
        scanf("%d", &given);
        int arr1[given];
        for (i = 0; i < given; i++)
        {
            scanf("%d", &arr1[i]);
        }
        printf("The Given element is : ");
        for (i = 0; i < given; i++)
        {
            printf("%d ", arr1[i]);
        }

        printf("position in the array : ");
        scanf("%d", &position);

        for (i = 0; i < position; i++)
        {
            temp = arr1[0];
            for (j = 0; j < given; j++)
            {
                arr1[j] = arr1[j + 1];
            }
            arr1[given - 1] = temp;
        }

        printf("The rotate array is: ");
        for (i = 0; i < given; i++)
        {
            printf("%d ", arr1[i]);
        }

        return 0;
    }