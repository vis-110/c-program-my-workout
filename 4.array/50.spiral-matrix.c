#include <stdio.h>
int main()
{
    int i, j, start, row, column, rEnd, cEnd, temp;
    printf("Enter the range of the row : ");
    scanf("%d", &row);
    printf("Enter the range of the column : ");
    scanf("%d", &column);
    int arr[row][column];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Element [%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The given array is : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    start = 0;
    rEnd = row - 1;
    cEnd = column - 1;
    for (i = start; i < row; i++)
    {
        if ((i == start) || (i == rEnd))
        {
            if (i == rEnd)
            {
                temp = start;
                column = temp;
                start = column;
                column = start;
            }
            for (j = start; j < column; j++)
            {
                printf("%d", arr[i][j]);
                if (i == rEnd)
                {
                    j = j - 2;
                }
            }
        }
        else
        {
            printf("j = %d\n", j);
            printf("i = %d\n", i);
            printf("%d ", arr[i][j]);
        }
    }

    return 0;
}