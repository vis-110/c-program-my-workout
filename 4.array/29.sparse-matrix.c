
// 29. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
// 	Test Data :
// 	Input the number of rows of the matrix : 2
// 	Input the number of columns of the matrix : 2
// 	Input elements in the first matrix :
// 	element - [0],[0] : 0
// 	element - [0],[1] : 0
// 	element - [1],[0] : 1
// 	element - [1],[1] : 0
// 	Expected Output :
// 	The given matrix is sparse matrix.
// 	There are 3 number of zeros in the matrix

#include <stdio.h>
int main()
{
    int i, j, c = 0, d = 0, row, column;
    printf("Input the number of rows of the matrix : ");
    scanf("%d", &row);
    printf("Input the number of column of the matrix : ");
    scanf("%d", &column);
    int arr[row][column];

    printf("Input elements in the first matrix : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("element - [%d] [%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (arr[i][j] == 0)
                c++;
            else
                d++;
        }
    }

    if(c>d){
        printf("The given matrix is spanse matrix \n");
    }
    else{
        printf("The given matrix not a spanse matrix \n");

    }
    printf("There are %d number of zeros in the matrix \n",c);

    return 0;
}

// PS F:\start-c-program\array> ./output
// Input the number of rows of the matrix : 2
// Input the number of column of the matrix : 2
// Input elements in the first matrix : element - [0] [0] : 1
// element - [0] [1] : 0l
// element - [1] [0] : 0
// element - [1] [1] : 0
// The given matrix is spanse matrix 
// There are 3 number of zeros in the matrix