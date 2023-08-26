#include <stdio.h>
int main(){
    int i,c=1,j,given;
    printf("please enter the value\n");
    for(i=c;i<=given;i++){
        for(j=c;j<=given*i;j++){
            printf("%d\t",j);
        }
        printf("\n");
        c=j;
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int sum;
//     for (int i = 0; i < 16; i += 4)
//     {
//         for (int j = 1; j <= 4; j++)
//         {
//             sum = i+j;
//             printf("%d\t",sum );
//         }
//         printf("\n");
//     }
//     return 0;
// }






