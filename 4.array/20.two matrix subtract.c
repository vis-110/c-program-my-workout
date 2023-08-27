#include <stdio.h>
int main()
{
    int i, given,j;
    printf("Input the size of the square matrix : \n");
    scanf("%d", &given);
    int array1[given] [given],array2[given] [given],newArray[given] [given];
    printf("Input element in the first matrix : \n");
    for (i = 0; i < given; i++)
    {
       for(j=0;j<given;j++){
         printf("element - [%d],[%d] : ", i,j);
        scanf("%d", &array1[i][j]);
       }
    }
    printf("Input element in the second matrix : \n");
    for (i = 0; i < given; i++)
    {
       for(j=0;j<given;j++){
         printf("element - [%d],[%d] : ", i,j);
        scanf("%d", &array2[i][j]);
       }
    }

   printf("The first matrix is: \n");
    for (i = 0; i < given; i++)
    {
       for(j=0;j<given;j++){
          printf("%d ", array1[i][j]);
       }
       printf("\n");
    }
   printf("The second matrix is : \n");
    for (i = 0; i < given; i++)
    {
       for(j=0;j<given;j++){
         printf("%d ", array2[i][j]);
       }
       printf("\n");
    }
     printf("The subtraction of two matrix is : \n");
    for (i = 0; i < given; i++)
    {
       for(j=0;j<given;j++){
        newArray[i][j]= array1[i][j] - array2[i][j];
        printf("%d ", newArray[i][j]);
       }
       printf("\n");
    }
return 0;
}