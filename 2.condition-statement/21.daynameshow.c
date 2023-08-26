#include <stdio.h>
int main(){
    int daynumber;
        printf("please enter any day number\n");
        scanf("%d",&daynumber);
        switch(daynumber)
        {
            case 1:
            printf("sunday");
            break;
            case 2:
            printf("monday");
            break;
            case 3:
            printf("tuesday");
            break;
            case 4:
            printf("wednesay");
            break;
            case 5:
            printf("thursday");
            break;
            case 6:
            printf("friday");
            break;
            case 7:
            printf("saturday");
            break;
            default:
            printf("Don't this value");
        }
    return 0;
}