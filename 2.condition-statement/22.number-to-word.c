#include <stdio.h>
int main(){
    int num;
        printf("please enter 1 to 5 any one day number\n");
        scanf("%d",&num);
        switch(num)
        {
            case 1:
            printf("One");
            break;
            case 2:
            printf("Two");
            break;
            case 3:
            printf("Three");
            break;
            case 4:
            printf("Fore");
            break;
            case 5:
            printf("Five");
            break;
            default :
            printf("Don't this values");
        }
    return 0;
}