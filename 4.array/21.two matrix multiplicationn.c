// 21. Write a program in C for the multiplication of two square matrices.
// 	Test Data :
// 	Input the rows and columns of first matrix : 2 2
// 	Input the rows and columns of second matrix : 2 2
// 	Input elements in the first matrix :
// 	element - [0],[0] : 1
// 	element - [0],[1] : 2
// 	element - [1],[0] : 3
// 	element - [1],[1] : 4
// 	Input elements in the second matrix :
// 	element - [0],[0] : 5
// 	element - [0],[1] : 6
// 	element - [1],[0] : 7
// 	element - [1],[1] : 8
// 	Expected Output :
// 	The First matrix is :

// 	1 2
// 	3 4
// 	The Second matrix is :

// 	5 6
// 	7 8
// 	The multiplication of two matrix is :

// 	19 22
// 	43 50

#include <stdio.h>
int main()
{
    int i, j, l, k, sum = 0, A = 0, a, row1, column1, row2, column2;
    printf("Input the rows and columns of first matrix :");
    scanf("%d %d", &row1, &column1);
    printf("Input the rows and columns of second matrix : ");
    scanf("%d %d", &row2, &column2);
    int arr1[row1][column1], arr2[row2][column2],arr3[row1][column1];
    printf("Input elements in the first matrix : \n");

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < column1; j++)
        {
            printf("element - [%d][%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Input elements in the second matrix : \n");

    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < column2; j++)
        {
            printf("element - [%d][%d] : ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    start:
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            a = arr1[i][j];
            for (l = j; l <=j; l++)
            {
                for (k = A; k <=A; k++)
                {
                      sum=sum+(arr2[l][k]*a);
                }
            }

        }
        j=A;
        arr3[i][j]=sum;
        printf("%d ",arr3[i][j]);
        sum=0;
    }
    if(j==0){
        A=1;
        goto start;
        printf("\n");
    }
    return 0;
}