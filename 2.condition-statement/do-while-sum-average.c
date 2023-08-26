#include <stdio.h>
int main(){
    float sum=0,Average,g;
    int i=1;
    do{
        printf("Number-%d : ",i);
        scanf("%f",&g);
        sum = sum+g;
        i++;
    }while (i<=10);
    Average=sum/(i-1);
    printf("the sum of %d no is :%f",i-1,sum);
    printf("the Average is :%f",Average);
    
}