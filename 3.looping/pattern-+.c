#include <stdio.h>
int main()
{
    int i, j, count = 0, given, positive = 43, negative = 45;
    printf("Input value\n");
    scanf("%d", &given);
    for (i = 1; i <= given; i++)
    {
        for (j = 1; j <= given; j++)
        {

            if (i == 1 || i == given)
            {
                printf("%c ", negative);
            }
            else
            {
                if ((i % 2) == 0)
                {
                    if ((j % 2) == 0)
                    {
                        printf("%c ", negative);
                    }
                    else
                    {
                        printf("%c ", positive);
                    }
                }
                else
                {
                    if ((j % 2) == 0)
                    {
                        printf("%c ", positive);
                    }
                    else
                    {
                        printf("%c ", negative);
                    }
                }
            }
        }
        printf("\n");
    }
    
}