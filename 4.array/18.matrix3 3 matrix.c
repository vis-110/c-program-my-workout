#include <stdio.h>
int main()
{
    int i, given,j;
    printf("Input the size of the square matrix : \n");
    scanf("%d", &given);
    int array1[given] [given];
    for (i = 0; i < given; i++)
    {
       for(j=0;j<given;j++){
         printf("element - [%d],[%d] : ", i,j);
        scanf("%d", &array1[i][j]);
       }
    }

    for (i = 0; i < given; i++)
    {
       for(j=0;j<given;j++){
        printf("%d ", array1[i][j]);
       }
       printf("\n");
    }
return 0;
}
