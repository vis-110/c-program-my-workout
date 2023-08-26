#include <stdio.h>
int main(){
    int a,b,c;
    printf("please Enter three values\n");
    scanf("%d %d %d",&a,&b,&c);

    printf("1st number = %d\n",a);
    printf("2st number = %d\n",b);
    printf("3st number = %d\n",c);
    if((a>b)&&(b>c)&&((a>c)||(c>a)))
    {
        printf("The 1st number is the greatest among ");
    }
    else if((b>a)&&(b>c)&&((a>c)||(c>a)))
    {
     printf("The 2st number is the greatest among ");
    }
    else
    printf("The 3st number is the greatest among ");
    return 0;
}
