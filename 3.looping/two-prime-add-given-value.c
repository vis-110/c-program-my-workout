#include <stdio.h>
int main()
{
    int i, j, d, a, b, c, count = 0, given;
    printf("input value : ");
    scanf("%d", &given);
    for (i = given; i > 0; i--)
    {
        for (j = 1; j <= given; j++)
        {
            if ((i % j) == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            c = i;
            count = 0;
            for (a = 1; a <= given && c != a; a++)
            {
                for (b = given; b > 0; b--)
                {
                    if ((a % b) == 0)
                    {
                        count++;
                    }
                }
                if (count == 2)
                {
                    d = a;
                    if ((c + d) == given)
                    {
                        printf("%d + %d = %d\n", i, a, given);
                        count = 0;
                    }
                }
                count = 0;
            }
        }
        count = 0;
    }
    return 0;
}