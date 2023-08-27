// 23. Write a program in C to find the sum of the left diagonals of a matrix.
// 	Test Data :
// 	Input the size of the square matrix : 2
// 	Input elements in the first matrix :
// 	element - [0],[0] : 1
// 	element - [0],[1] : 2
// 	element - [1],[0] : 3
// 	element - [1],[1] : 4
// 	Expected Output :
// 	The matrix is :
// 	1 2
// 	3 4
// 	Addition of the left Diagonal elements is :5
// 	Elements in array are:

    #include <stdio.h>
    int main()
    {
        int given, i, j, sum=0;
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
        printf("The matrix is : \n");
        for (i = 0; i < given; i++)
        {
            for (j = 0; j < given; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
            printf("Addition of the left Diagonal elements is : ");
        for (i = 0; i < given; i++)
        {
            for (j = 0; j < given; j++)
            {
                if(i == j){
                    sum = sum + a[i][j];
                }
            }
        }
        printf("%d",sum);
        
        return 0;
    }