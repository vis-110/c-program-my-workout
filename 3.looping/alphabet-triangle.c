#include <stdio.h>
int main()
{
    int i, j, k, given;
    printf("Input value\n");
    scanf("%d", &given);
    for (i = 65; i < (65 + given); i++)
    {
        for (j = 1; j <= (65+given - i); j++)
        {
            printf(" ");
        }
        for (j = 65; j <= i; j++)
        {
            if (i == j)
            {
                for (k = j; k >= 65; k--)
                {
                    printf("%c ", k);
                }
            }
            else
            {
                printf("%c ", j);
            }
        }
        printf("\n");
    }
    return 0;
}