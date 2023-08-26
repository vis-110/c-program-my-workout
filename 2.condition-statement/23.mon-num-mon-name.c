#include <stdio.h>
int main(){
    int monthnum;
        printf("please enter any month number\n");
        scanf("%d",&monthnum);
        switch(monthnum)
        {
            case 1:
            printf("January");
            break;
            case 2:
            printf("February");
            break;
            case 3:
            printf("March");
            break;
            case 4:
            printf("April");
            break;
            case 5:
            printf("May");
            break;
            case 6:
            printf("June");
            break;
            case 7:
            printf("July");
            break;
            case 8:
            printf("August");
            break;
            case 9:
            printf("September");
            break;
            case 10:
            printf("October");
            break;
            case 11:
            printf("November");
            break;
            case 12:
            printf("Devember");
            break;
            default:
            printf("Don't this value");
        }
    return 0;
}