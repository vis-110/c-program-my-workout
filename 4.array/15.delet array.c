#include <stdio.h>
int main()
{
    int i, given, index, element;
    printf("Input the number of elements to store in the array : \n");
    scanf("%d", &given);
    int Givenarray[given];
    printf("Input %d elements in the array: \n", given);
    for (i = 0; i < given; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &Givenarray[i]);
    }
    printf("Input the position element : \n");
    scanf("%d", &element);
    index = element - 1;
    for (i = 0; i < given - 1; i++)
    {
        if (i >= index)
        {
            Givenarray[i] = Givenarray[i + 1];
        }
    }
    for (i = 0; i < given - 1; i++)
    {
        printf("%d  ", Givenarray[i],i);
    }
    return 0;
}