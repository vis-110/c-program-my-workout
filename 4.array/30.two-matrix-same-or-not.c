
// 30. Write a program in C to accept two matrices and check whether they are equal.
// 	Test Data :
// 	Input Rows and Columns of the 1st matrix :2 2
// 	Input Rows and Columns of the 2nd matrix :2 2
// 	Input elements in the first matrix :
// 	element - [0],[0] : 1
// 	element - [0],[1] : 2
// 	element - [1],[0] : 3
// 	element - [1],[1] : 4
// 	Input elements in the second matrix :
// 	element - [0],[0] : 1
// 	element - [0],[1] : 2
// 	element - [1],[0] : 3
// 	element - [1],[1] : 4
// 	Expected Output :
// 	The first matrix is :
// 	1 2
// 	3 4
// 	The second matrix is :
// 	1 2
// 	3 4
// 	The Matrices can be compared :
// 	Two matrices are equal.

#include <stdio.h>
int main()
{
    int i, j,z, row, column;
    printf("Input the number of rows of the matrix : ");
    scanf("%d", &row);
    printf("Input the number of column of the matrix : ");
    scanf("%d", &column);
    int arr[row][column], arr2[row][column];

    printf("Input elements in the first matrix : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("element - [%d] [%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Input elements in the second matrix : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("element - [%d] [%d] : ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("The first matrix : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (arr[i][j] != arr2[i][j]){
                printf("The two matrix are not equal");
                return 0;
            }
            else
            {
                if ((row- 1 == i) && (column- 1 == j))
                    printf("The two matrix are equal");
            }
        }
    }

    return 0;
}