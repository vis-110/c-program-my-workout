#include <stdio.h>
int main(){
    int monnum;
        printf("please enter month number\n");
        scanf("%d",&monnum);
        switch(monnum)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 9:
            case 11:
            printf("This month have 31 days");
            break;
            case 2:
            printf("This month have 28 days");
            break;
            case 4:
            case 6:
            case 8:
            case 10:
            case 12:
            printf("This month have 30 days");
            break;
            default :
            printf("Don't this values");
        }
    return 0;
}