#include <stdio.h>
void number();
void main()
{
    int given;
    number();
    printf("End the process");
}

void number()
{
    int given;
    printf("Input they any integer number : ");
    scanf("%d", &given);
    if ((given % 2) == 0)
        printf("The enter number is even\n");
    else
        printf("The enter number is odd\n");
}