// 
#include<stdio.h>
int main(){
    int a,b,c,d,f;
    float e;
    printf("Enter any two values\n");
    scanf("%d,%d",&a,&b);
    c=a+b;
    d=a-b;
    f=a*b;
    e=a/b;
    printf("The sum of given number:%d\n",c);
    printf("Difference of given number:%d\n",d);
    printf("Product of given number:%d\n",f);
    printf("Qurient of given number:%f\n",e);
    return 0;
}