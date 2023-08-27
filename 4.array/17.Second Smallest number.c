#include <stdio.h>
int main()
{
    int i, given, temp, j;
    printf("Input the number of elements to store in the array : \n");
    scanf("%d", &given);
    int array[given];
    for (i = 0; i < given; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    
    for (i = 0; i < given ; i++)
    {
        for (j = i + 1; j < given; j++)
        {
            if (array[i] >array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("The Second smallest element in the array : %d ", array[1]);
}