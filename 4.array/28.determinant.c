
// 28. Write a program in C to calculate the determinant of a 3 x 3 matrix.
// 	Test Data :
// 	Input elements in the first matrix :
// 	element - [0],[0] : 1
// 	element - [0],[1] : 0
// 	element - [0],[2] : -1
// 	element - [1],[0] : 0
// 	element - [1],[1] : 0
// 	element - [1],[2] : 1
// 	element - [2],[0] : -1
// 	element - [2],[1] : -1
// 	element - [2],[2] : 0
// 	Expected Output :
// 	The matrix is :
// 	1 0 -1
// 	0 0 1
// 	-1 -1 0

// 	The Determinant of the matrix is: 1

#include <stdio.h>
int main()
{
    int given, i, j, sum = 0, A, k, l, c = 0, x, y, d = 0, multiple1, multiple2;
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
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }

   i = 0;
        for (j = 0; j < 3; j++)
        {
            A = a[i][j];
            for (k = 1; k < 3; k++)
            {
                for (l = 0; l < 3; l++)
                {
                    if (j != l)
                    {
                        if (k == 1)
                        {

                            if (c % 2 == 0)
                            {
                                x = a[k][l];
                            }
                            else
                            {
                                y = a[k][l];
                            }
                        }
                        else
                        {

                            if (c % 2 == 0)
                            {
                                multiple1 = (-y) * a[k][l];
                            }
                            else
                            {
                                multiple2 = x * a[k][l];
                            }
                        }
                        c++;
                    }
                }
                c = 0;
            }

            if (d % 2 == 0)
            {
                A = A * (multiple2 + multiple1);
            }
            else
            {
                A = (-A) * (multiple2 + multiple1);
            }
            d++;
            sum = sum + A;
            A = 0;
        }
        printf("The determinant of the matrix is : %d", sum);
    

    return 0;
}

// The matrix is:
// 1  0  -1
// 0  0  1
// -1  -1  0
// The determinant of the matrix is : 1