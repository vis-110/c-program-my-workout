#include <stdio.h>
int main(){
    int i,j,a,b,given,count=0;
    printf("Enter the input value\n");
    scanf("%d",&given);
    printf("The number revered order : ");
    for(i=given;i!=0;i=i/10){
        count++;
    }   
    for(j=1;j<=count;j++){
        a=(given%10);
        b=(given/10);
        given=b;
        printf("%d",a);
    }
}