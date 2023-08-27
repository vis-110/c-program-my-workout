#include <stdio.h>
int main()
{
    int i, j,temp = 0, given;
    printf("Enter no of elements :  ");
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

    for (i = arr[0]; i < arr[given-1]; i++)
    {
        for (j = 0; j < given; j++)
        {
            if (i == arr[j]){
                temp++;
            }
                
        }
        if (temp == 0)
        {
            printf("The missing smallest Element : %d", i);
            return 0;
        }
        temp = 0;
    }

    return 0;
}