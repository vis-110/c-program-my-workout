
// Assending Order

#include <stdio.h>
int main()
{
    int i, given, temp, j,value;
    printf("Input the number of elements to store in the array : \n");
    scanf("%d", &given);
    int array[given];
    for (i = 0; i < given; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }

    printf("Input the value to be inserted : ");
    scanf("%d", &value);

    printf("The exist array list is : \n");
    for(i = 0; i < given; i++){
        printf("%d", array[i]);
    }

        array[i]=value;
    
    for (i = 0; i < given; i++)
    {
        for (j = i + 1; j < given+1; j++)
        {
            if (array[i] >array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("\nAfter insert the list is : \n");
    for (i = 0; i < given+1; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}