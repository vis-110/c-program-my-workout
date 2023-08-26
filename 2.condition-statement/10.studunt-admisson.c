#include <stdio.h>
int main(){
    int a,b,c,d,e;
    printf("please Enter maths marks\n");
    scanf("%d",&a);
    printf("please Enter phy marks\n");
    scanf("%d",&b);
    printf("please Enter chem marks\n");
    scanf("%d",&c);

    d=a+b+c;
    printf("three subject total markes = %d\n",d);
    e= a+b;
    printf("three subject total markes = %d\n",e);

    if(a>=65 && b>=55 && c>=50)
    {
        if(d>=190){
            if(e>=140){
                printf("The candiat is eligible for admission\n");
            }
            else{
                printf("The candiat total mark is ok but (maths and phy) low marks so not eligible\n");
            }
        }
        else{
        printf("The candiat is not eligible for admission\n");

        }
    }
    else
    printf("your subject mark low so apply this institutions not eligibility");
    return 0;
} 