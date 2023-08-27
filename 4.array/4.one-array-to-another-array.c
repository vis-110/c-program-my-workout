
#include<stdio.h>
int main(){
    int i,given,sum=0;
    printf("Input the number of elements to store in the array : \n");
    scanf("%d",&given);
    int array[given];
    for(i=0;i<given;i++){
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }
    printf("\n the element stored into the first array are : \n");
    for(i=0;i<given;i++){
        printf("%d",array[i]);
    }
    printf("\n");
    int b[given];
    printf("the element copied into the second array are : \n");
    for(i=0;i<given;i++){
        b[i]=array[i];
        printf("%d",b[i]);
    }
    
}