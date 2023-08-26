    #include <stdio.h>
    int main()
    {
        int i, j, input1, input2, n = 0, g;
        printf("input starting number of range : ");
        scanf("%d", &input1);
        printf("input ending number of range : ");
        scanf("%d", &input2);
        printf("The prime number between %d and %d\n",input1,input2);
        for (i = input1; i <= input2; i++)
        {
            for (j = 1; j <= i; j++)
            {
                if ((i % j) == 0)
                {
                    n++;
                }
            } 
            if (n == 2)
                {
                    printf("%d ", i);
                }
            n=0;
        }

        return 0;
    }

    input starting number of range : 1
    input ending number of range : 100
    The prime number between 1 and 100       
    2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 
    53 59 61 67 71 73 79 83 89 97 