#include <stdio.h>
int main()
{
    int i, j, temp = 0, given;
    printf("Enter no of elements\n");
    scanf("%d", &given);
    int arr[given];

    for (i = 0; i < given; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The Given array is : ");
    for (i = 0; i < given; i++)
    {
        printf("%d\n", arr[i]);
    }

    for (i = 0; i < given; i++)
    {
        for (j = i; j < given; j++)
        {
            if (arr[i] < arr[j + 1])
            {
                if(arr[given-1] >= arr[j+1])
                {
                    printf("Next bigger element of %d in the array is : %d\n", arr[i], arr[j + 1]);
                    arr[temp] = arr[j + 1];
                    temp++;
                    break;
                }
                else
                {
                    printf("Next bigger element of %d in the array is : %d\n", arr[i], -1);
                    arr[temp] = -1;
                    temp++;
                }
            }
        }
    }

    printf("Next bigger element array : ");
    for (i = 0; i < temp; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}