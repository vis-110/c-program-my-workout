// 27. Write a program in C to print or display an upper triangular matrix.
// 	Test Data :
// 	Input the size of the square matrix : 3
// 	Input elements in the first matrix :
// 	element - [0],[0] : 1
// 	element - [0],[1] : 2
// 	element - [0],[2] : 3
// 	element - [1],[0] : 4
// 	element - [1],[1] : 5
// 	element - [1],[2] : 6
// 	element - [2],[0] : 7
// 	element - [2],[1] : 8
// 	element - [2],[2] : 9
// 	Expected Output :
// 	The matrix is :
// 	1 2 3
// 	4 5 6
// 	7 8 9

// 	Setting zero in upper triangular matrix
	
// 	1 0 0
// 	4 5 0
// 	7 8 9

#include <stdio.h>
int main()
{
	int i, j, given;
	printf("Input the size of the square matrix ; ");
	scanf("%d", &given);
	int arr[given][given];

	printf("Input elements in the first matrix : \n");
	for (i = 0; i < given; i++)
	{
		for (j = 0; j < given; j++)
		{
			printf("element - [%d] [%d] : ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	printf("The matrix is :\n");
	for (i = 0; i < given; i++)
	{
		for (j = 0; j < given; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("Setting zero in upper triangular matrix \n");
	for (i = 0; i < given; i++)
	{
		for (j = 0; j < given; j++)
		{
			if (j > i)
			{
				arr[i][j] = 0;
				printf("%d ", arr[i][j]);
			}
			else
			{
				printf("%d ", arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
} 