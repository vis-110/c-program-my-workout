    #include <stdio.h>
    int main()
    {
        int i, j, k, z, given;
        printf("Enter input value\n");
        scanf("%d", &given);
        for (i = 1; i <= given; i++)
        {
            for (j = given - i; j > 0; j--)
            {
                printf(" ");
            }
            for (k = 1; k < (i * 2); k++)
            {
                if (i == k)
                {
                    for (z = i; z > 0; z--)
                    {
                        printf("%d", z);
                    }
                    break;
                }
                else
                {
                    printf("%d", k);
                }
            }
            printf("\n");
        }
        return 0;
    }

    Enter input value
    5
        1
       121
      12321
     1234321
    123454321