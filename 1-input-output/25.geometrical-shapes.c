#include <stdio.h>
int main(){
    int length,breadth,height,radious,Innum,A;
        printf("please enter length\n");
        scanf("%d",&length);
        printf("please enter breadth \n");
        scanf("%d",&breadth);
        printf("please enter height\n");
        scanf("%d",&height);
        printf("please enter radious\n");
        scanf("%d",&radious);
        printf("please enter 1 find square area\n");
        printf("please enter 2 find rectangle area\n");
        printf("please enter 3 find triangle area\n");
        printf("please enter 4 find circle area\n");
        scanf("%d",&Innum);
        switch(Innum){
            case 1:
            A=length*length;
            printf("square area: %d\n",A);
            break;
            case 2:
            A=length*breadth;
            printf("rectangle area: %d\n",A);
            break;
            case 3:
            A=0.5*breadth*height;
            printf("triangle area: %d\n",A);
            break;
            case 4:
            A=3.14*radious*radious;
            printf("circle area: %d\n",A);
            break;
            default :
            printf("Don't this values");
        }
    return 0;
}