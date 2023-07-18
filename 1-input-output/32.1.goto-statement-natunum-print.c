#include <stdio.h>
int main(){
    int i=1,a=0,g;
    printf("please enter the number find natural number sum\n");
    scanf("%d",&g);
    printf("Natural number are:");
    Entry:
    a=a+i;
    
    printf(" %d ",i);
    i=i+1;
    if(i != g){
        goto Entry;
    }
    printf("\n");
    printf("sum is - %d",a);
} 