    #include <stdio.h>
    int main()
    {
        int i, j, k = 10, c = 1, value, given, z, v = 0, count = 0, sum = 0, a, b;
        printf("Enter the input values\n");
        scanf("%d", &given);
        z = given;
        for (i = z; i != 0; i = i / 10)
        {
            count++;
        }
        for (j = 1; j <= count; j++)
        {
            a = z % 10;
            b = z / 10;
            z = b;

            if (j == count)
            {
                v = a;
            }
            else
            {
                for (i = count - j; i >= 1; i--)
                {
                    a = a * k;
                    value = a;
                }
            }
    
            sum = sum + value + v;
            value = 0;
        }
        if (given == sum)
        {
            printf("%d is a palindrome number\n", given);
        }
        else
        {
            printf("%d is a not palindrome number\n", given);
        }
        return 0;
    }


    //  Enter the input values
    // 121
    // 121 is a palindrome number

    // Enter the input values
    // 444
    // 444 is a palindrome number
    
    // Enter the input values
    // 123
    // 123 is a not palindrome number