#include <stdio.h>
int multiple(int);
void main()
{   int given,A;
    int n1=10,n2=15;
    printf("Input any number for squaty : ");
    scanf("%d",&given);
    multiple(given);
    printf("The square of %d is : %d\n",given,multiple(given));
}

int multiple(int given)
{
    int A;
    A= given*given;
    return A;
}