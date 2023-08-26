#include <stdio.h>
int main(){
    int Given,exitOrRun;

    start:
        printf("please Enter the number find even or add\n");
    scanf("%d",&Given);
    printf("Enter the number :%d\n",Given);
    if((Given%2)==0){
        printf("Entered the number %d is even\n",Given);
    }
    else
    printf("Enter the number %d is odd\n",Given);

    printf("Enter to click 1, or Run again to click any number\n");
    scanf("%d",&exitOrRun);
    if(exitOrRun == 1){
        printf("program terminated\n");
        return 0;
    }
    else{
        goto start;
    }
    return 0;
}