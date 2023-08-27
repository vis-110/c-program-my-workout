

// 25. Write a program in C to find the sum of rows and columns of a matrix.
// 	Test Data :
// 	Input the size of the square matrix : 2
// 	Input elements in the first matrix :
// 	element - [0],[0] : 5
// 	element - [0],[1] : 6
// 	element - [1],[0] : 7
// 	element - [1],[1] : 8
// 	Expected Output :
// 	The First matrix is :
// 	The matrix is :
// 	5 6
// 	7 8
// 	The sum or rows and columns of the matrix is :
// 	5 6 11
// 	7 8 15
	
// 	12 14

    #include <stdio.h>
    int main()
    {
        int given, i, j, sum1=0,sum2=0,sum3=0;
        printf("Input the size of the square matrix : ");
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
        printf("The first matrix is : \n");
        for (i = 0; i < given; i++)
        {
            for (j = 0; j < given; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        printf("The sum of rows and columns of the matrix is : \n");
        for (i = 0; i < given; i++)
        {
            sum1 = 0;
            sum2 = 0;
            for (j = 0; j < given; j++)
            {
                printf("%d  ",a[i][j]);
                sum1=sum1+a[i][j];
                sum2=sum2+a[j][i];
            }
            printf(" %d",sum1);
            a[given][i]=sum2;
            printf("\n");

        }
        printf("\n");
        for(j=0;j<given;j++){
            printf("%d ",a[given][j]);
        }
        return 0;
    }