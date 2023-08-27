#include <stdio.h>
int main()
{
    int given, i, j;
    printf("Input the row and colom of the matrix : ");
    scanf("%d", &given);
    int a[given][given];
    printf("input element in the first matrix: \n");
    for (i = 0; i < given; i++)
    {
        for (j = 0; j < given; j++)
        {
            printf("element - [%d],[%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The matrix is: \n");
    for (i = 0; i < given; i++)
    {
        for (j = 0; j < given; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < given; i++)
    {
        for (j = 0; j < given; j++)
        {
            if (i == j)
            {
                if (a[i][j] == 1)
                {
                    if (((given - 1) == i) && ((given - 1) == j))
                    {
                        printf("The matrix is an identy matrix");
                    }
                }
                else
                {
                    printf(" The matrix is an not a identy matrix \n");
                    return 0;
                }
            }
            else
            {
                if (a[i][j] == 0)
                {
                }
                else
                {
                    printf("The matrix is an not a identy matrix");
                    return 0;
                }
            }
        }
    }
    return 0;
}