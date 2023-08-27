#include <stdio.h>
int main()
{
    int i, j, z, temp = 0, temp2 = 0,c=0, given;
    printf("Enter no of elements : ");
    scanf("%d", &given);
    int arr[given], arr2[given];

    for (i = 0; i < given; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The Given array is : ");
    for (i = 0; i < given; i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < given; i++)
    {
        for (z = i; z >= 0; z--)
        {
            if (i != z)
            {
                if (arr[i] == arr[z])
                    temp++;
            }
        }
         
        if (temp == 0)
        {

            for (j = 0; j < given; j++)
            {
                if (i != j)
                {
                    if (arr[i] == arr[j])
                        c++;
                }
            }
        }
        printf(" temp = %d\n ",c);
        if (c >= 1)
        {
            arr2[temp2] =arr[i];
            temp2++;
        }
        printf(" temp2 = %d \n",temp2);
        temp = 0;
        c=0;
    }
    
        printf("The repeating element are : ");
        for (i = 0; i < temp2; i++)
        {
            printf("%d ", arr2[i]);
        }
    return 0;
}
 