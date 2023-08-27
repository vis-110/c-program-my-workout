#include <stdio.h>
int main()
{
    int i, given, sum = 0, c = 0;
    printf("Input the number of elements to store in the array : \n");
    scanf("%d", &given);
    int Givenarray[given], Oddarray[given], Evenarray[given];
    printf("Input %d elements in the array: \n", given);
    for (i = 0; i < given; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &Givenarray[i]);
    }
    
    for (i = 0; i < given; i++)
    {
        if ((Givenarray[i] % 2) != 0)
        {
            Oddarray[c] = Givenarray[i];
            
            c++;
        }
        else
        {
            Evenarray[sum] = Givenarray[i];
            sum++;
        }
    }
    printf("The Odd element are :\n");
    for(i=0;i<c;i++){
    printf("%d  ", Oddarray[i]);
    }
    printf("\nThe Even element are :\n");
    for(i=0;i<sum;i++){
    printf("%d  ", Evenarray[i]);
    }
    
}