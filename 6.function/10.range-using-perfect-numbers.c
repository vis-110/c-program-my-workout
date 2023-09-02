#include <stdio.h>

int perfectNum(int *given)
{
    int i, z, perfect = 0;
     printf("The perfect numbers between 1 to 100 are : \n", i);
    for (i = 1; i < 100; i++)
    {
        for (z = 1; z < i; z++)
        {
            if ((i % z) == 0)
            {
                perfect = perfect + z;
            }
        }
        if (perfect == i)
            printf("%d  ", i);
        perfect =0;
    }
    return 0;
}

int main()
{
    int given;
    printf("Before calling\n");
    perfectNum(&given);
    printf("\nAfter calling \n");
}