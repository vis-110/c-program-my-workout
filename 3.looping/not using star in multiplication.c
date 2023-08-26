#include <stdio.h>
int main(){
    int i,j,terms,value,multiplication=0;
    printf("Enter the no of terms\n");
    scanf("%d",&terms);
    printf("Enter the value\n");
    scanf("%d",&value);
    for(i=1;i<=terms;i++){
        for(j=1;j<=i;j++){
            multiplication=multiplication+value;
        }
        printf("%d * %d = %d\n",i,value,multiplication);
        multiplication=0;
    }
    return 0;
}