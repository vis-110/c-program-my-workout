#include <stdio.h>
int swap( );
void main()
{
    int n1=10,n2=15;
    printf("Before swapping n1 = %d, n2 = %d\n",n1,n2);
    swap(&n1,&n2);
    printf("After swapping n1 = %d, n2 = %d\n",n1,n2);
    printf("End the process");

}

int swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    return 0;
}