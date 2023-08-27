#include <stdio.h>
int main()
{
    int i, j, temp = 0, given, small, big;
    printf("Enter no of elements\n");
    scanf("%d", &given);
    int arr[given];

    for (i = 0; i < given; i++)
    {
        scanf("%d", &arr[i]);
    }
    small = arr[0];
    for (i = 0; i < given; i++)
    {
        if (small > arr[i])
            small = arr[i];
    }
    printf("small = %d\n", small);
    big = arr[given - 1];
    for (i = 0; i < given; i++)
    {
        if (big < arr[i])
            big = arr[i];
    }
    printf("big = %d\n", big);
    printf("The Given array is : ");
    for (i = 0; i < given; i++)
    {
        printf("%d\n", arr[i]);
    }

    for (i = small; i <= big; i++)
    {
        for (j = 0; j < given; j++)
        {
            if (i == arr[j])
            {
                temp++;
            }
        }

        if (temp == 0)
        {
            if (0 < i)
            {
                printf("The smallest positive number missed is : %d \n", i);
                return 0;
            }
        }
        temp = 0;
    }

    return 0;
}