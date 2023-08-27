
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
    for(i=0;i<given;i++){
        sum=sum+array[i];
    }
    printf("sum of all element stored in the array is : %d\n",sum);

    
}