// The following program works only if your compiler is C99 compatible.
#include <stdio.h>

// n must be passed before the 2D array
void addion(int given, int arr[][given])
{
    int i, j;
    for (i = 0; i < given; i++)
    {
        for (j = 0; j < given; j++)
        {
            printf("%d ", arr[i][j] + arr[i][j]);
        }
        printf("\n");
    }
}

void subtract(int given, int arr[][given])
{
    int i, j;
    for (i = 0; i < given; i++)
    {
        for (j = 0; j < given; j++)
        {
            printf("%d ", arr[i][j] - arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    int given, i, j;
    printf("Input the no.of row and coloum in the matrix :");
    scanf("%d", &given);
    int arr[given][given];

    for (i = 0; i < given; i++)
    {
        for (j = 0; j < given; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }
    addion(given, arr);
    subtract(given, arr);
    return 0;
}
