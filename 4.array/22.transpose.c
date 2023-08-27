#include <stdio.h>
int main()
{
    int row, colom, i, j;
    printf("Input the row and colom of the matrix : ");
    scanf("%d %d", &row, &colom);
    int a[row][colom], b[colom][row];
    printf("input element in the first matrix: \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < colom; j++)
        {
            printf("element - [%d],[%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < colom; j++)
        {
            printf("%d ", a[i][j]);
            b[j][i] = a[i][j];
        }
        printf("\n");
    }

    printf("The transpose of a matrix is : \n");                                                                                                                                                                                
    for (i = 0; i < colom; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}


// PS F:\start-c-program\array> gcc -o output .\22.transpose.c    
// PS F:\start-c-program\array> ./output

// Input the row and colom of the matrix : 3 2
// input element in the first matrix:
// element - [0],[0]:1
// element - [0],[1]:2
// element - [1],[0]:3
// element - [1],[1]:4
// element - [2],[0]:5
// element - [2],[1]:6
// The matrix is:
// 1 2
// 3 4
// 5 6
// The transpose of a matrix is :
// 1 3 5
// 2 4 6

// PS F:\start-c-program\array> ./output

// Input the row and colom of the matrix : 2 3
// input element in the first matrix: 
// element - [0],[0]:1
// element - [0],[1]:2
// element - [0],[2]:3
// element - [1],[0]:4
// element - [1],[1]:5
// element - [1],[2]:6
// The matrix is:
// 1 2 3
// 4 5 6
// The transpose of a matrix is :
// 1 4 
// 2 5
// 3 6
