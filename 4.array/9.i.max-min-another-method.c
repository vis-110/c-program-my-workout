#include <stdio.h>
int main()
{
    int i, given, sum = 0;
    printf("Input the number of elements to store in the array : \n");
    scanf("%d", &given);
    int a[given], b[given];
    printf("Input %d elements in the array: \n", given);
    for (i = 0; i < given; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }
    int big = a[0], small = a[0];
    for (i = 1; i < given; i++)
    {
        if (big < a[i])
        {
            big = a[i];
        }
        if (small > a[i])
        {
            small = a[i];
        }
    }
    printf("Maximum Element : %d\n", big);
    printf("Minimum Element : %d\n", small);
}