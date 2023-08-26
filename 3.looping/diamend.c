#include <stdio.h>
int main(){
    int i,j,k,v=1,row,c,d,e;
    printf("Enter the input values\n");
    scanf("%d",&row);
    printf("The excellent diamond shape\n");
    e=row+(row-1);
    for(i=0;i<=e;i++){
        c=row-i;
        d=i;
        if(i>row){
            c=i-row;
            d=row-v;
            v++;
        }
        for(j=1;j<=c;j++){
            printf(" ");
        }
        for(k=1;k<=d;k++){
            printf("* ");
        }
        printf("\n");
    }
}