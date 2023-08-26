#include <stdio.h>
int main()
{
    int i, j, k, c = 1, sum = 0, tSum = 0,a=1;
    for (i = a;i <= 8; i++)
    {
        if (i > 1)
        {
           
            a= 10;
        }
        for (j = a; j <= 10; j++)
        {

            if (j > 8)
            {
                c++;
            }
            for (k = j; k >= c; k--)
            {
                sum=sum+k;
                printf(" sum = %d \t\n",sum);
            }
            tSum=tSum+sum;
            printf(" \ntSum = %d ",tSum);
            sum=0;
        }
    }
    return 0;
}