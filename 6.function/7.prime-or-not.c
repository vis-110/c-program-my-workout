#include <stdio.h>
void primeNum();
void main()
{
    int given;
    printf("Before calling\n");
    primeNum();
    printf("After calling \n");
}

void primeNum(){
    int i, temp = 0, given;

    printf("input the decimal number : ");
    scanf("%d", &given);
    for (i = given; 1 <= i; i--)
    {
        if ((given % i) == 0)
        {
            temp++;
        }
    }
    if (temp == 2)
        printf("The number %d is a prime number\n", given);
    else
        printf("The number %d is not a prime number\n", given);
}
