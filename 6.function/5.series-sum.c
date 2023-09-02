#include <stdio.h>
int sum();

void main()
{
    printf("Before calling function\n");
    sum();
    printf("The sum of series is : %d\n", sum());
    printf("After calling function\n");
}

int sum()
{
    int i, j, sum = 1, sum1 = 0, divid;

    for (i=1;i<=5;i++)
    {
        for (j=i;1<=j;j--)
        {
            sum = sum * j;
        }

        divid = sum /i;
        sum1 = sum1 + divid;
        sum = 1;
    }
    return sum1;
}