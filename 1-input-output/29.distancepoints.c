#include <stdio.h>
#include <math.h>
int main(){
    int xDis,yDis,disPoints,x1,y1,x2,y2;
    printf("please enter x1,y1,x2,y2 values");
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    xDis = (x2-x1)*(x2-x1);
    yDis = (y2-y1)*(y2-y1);
    disPoints = sqrt(xDis+yDis);
    printf("Distance between the said points:%d\n",disPoints);
    return 0;
}