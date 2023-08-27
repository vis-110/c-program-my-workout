#include <stdio.h>
int main()
{
    int i, j, temp = 0, given1, given2, given3;
    printf("Enter total no of elements in Large array :");
    scanf("\n%d", &given1);

    int LarArray[given1];

    for (i = 0; i < given1; i++)
    {
        scanf("%d", &LarArray[i]);
    }

    printf("The Given Large array is :\n");
    for (i = 0; i < given1; i++)
    {
        printf("%d ", LarArray[i]);
    }

    printf("\nEnter total no of elements in small array : ");
    scanf("\n%d", &given2);
    int SmallArray[given2];
    for (i = 0; i < given2; i++)
    {
        scanf("%d", &SmallArray[i]);
    }

    printf("\nThe Given small array is :\n");
    for (i = 0; i < given2; i++)
    {
        printf("%d ", SmallArray[i]);
    }

    given3 = given1 + given2;

    int newArray[given3];
    for (i = 0; i < given3; i++)
    {
        if ((i % 2) == 0)
            newArray[i] = LarArray[temp];
        else
        {
            newArray[i] = SmallArray[temp];
            temp++;
        }
    }

    printf("\nThe New merged array : ");
    for (i = 0; i < given3; i++)
    {
        printf("%d ", newArray[i]);
    }

return 0;
}