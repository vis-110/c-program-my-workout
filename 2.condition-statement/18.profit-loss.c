#include<stdio.h>
int main(){
    int a,b,c;
    printf("Please Enter investment amount\n");
    scanf("%d",&a);
    printf("Please Enter gain amount\n");
    scanf("%d",&b);
    c=b-a;
    if(0<c){
        printf("you can booked your profit amount : %d\n",c);
    }
    if(0>c){
        printf("you can booked your Loss amount : %d\n",c*(-1));
    }
    if(0==c){
        printf("no profit no loss");
    }

}