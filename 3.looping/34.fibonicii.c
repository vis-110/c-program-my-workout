// Write a program in C to display the first n terms of the Fibonacci series.Fibonacci series 0 1 2 3 5 8 13 .....

    #include <stdio.h>
    int main()
    {
    int i, firstNum = 0, secondNum = 1, add, given;
    printf("Input number of terms to display : ");
    scanf("%d", &given);
    printf("%d %d", firstNum, secondNum);
    for (i = 1; i <= (given - 2); i++)
    {
        add = firstNum + secondNum;
        printf(" %d ", add);
        firstNum = secondNum;
        secondNum = add;
    }
    return 0;
    }

    Input number of terms to display : 10
    0 1 1  2  3  5  8  13  21  34 