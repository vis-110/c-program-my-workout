// debug program

#include <stdio.h>
int main()
{
    int again = 0; 
    int a = 10;
start:
    for (int i = 0; i < a; i++)
    {
        printf("i = %d\n", i);
    }

    printf("Again print or nor: to print enter 1 otherwise not print: ");
     scanf("%d", &again);

    if (again == 1)
        goto start;
    else
        goto end;

end:
    return 0;
}