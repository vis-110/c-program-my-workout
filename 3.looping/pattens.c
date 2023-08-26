// #include <stdio.h>
// int main(){
//     int i,j,given,c,d=1;
//     printf("please enter the value\n");
//     scanf("%d",&given);

//     for(i=1;i<=(given+(given-1));i++){
//         c=i;
//         if(i>given){
//             c=given-d;

//             d++;
//         }
//         for(j=0;j<c;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// output
// *
// **
// ***
// ****
// *****
// ******
// *****
// ****
// ***
// **
// *

// #include <stdio.h>
// int main(){
//     int i,j,k,given;
//     printf("please enter the value\n");
//     scanf("%d",&given);

//     for(i=1;i<=given;i++){
//         for(j=1;j<=(given-i);j++){
//             printf("%d",i);
//         }
//         for ( k = 0; k < i; k++)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }
// }
// please enter the value
// 4
// 111*
// 22**
// 3***
// ****

// #include <stdio.h>
// int main(){
//     int i,j,k,given;
//     printf("please enter the value\n");
//     scanf("%d",&given);

//     for(i=0;i<given;i++){
//         for(j=0;j<i;j++){
//             printf(" ");
//         }
//         for ( k = 0; k <given-i; k++)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }
// }
// PS F:\start-c-program\3.looping> .\output
// please enter the value
// 4
// ****
//  ***
//   **
//    *

// #include <stdio.h>
// int main()
// {
//     int i, j, k, c, d,e=1, given;
//     printf("please enter the value\n");
//     scanf("%d", &given);
//     for (i = 1; i <= given+given-1; i++)
//     {
//         c = given - i;
//         d = i;
//         if (given < i)
//         {
//             c = i-given ;
//             d = given-e;
//             e++;
//         }

//         for (j = 1; j <= c; j++)
//         {
//             printf(" ");
//         }
//         for (k = 1; k <= d; k++)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }
// }


// #include <stdio.h>
// int main(){
//     int i=1,row;
//     printf("please enter the value\n");
//     scanf("%d",&row);
//     while ((i<=row)){
//        int j=1;
//         while (j<=i)
//         {
            
//             printf("%d",i);
//             j++;
//         }
//         printf("\n");
//         i++;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i,j,c=0,given;
//     printf("please enter the value\n");
//     scanf("%d",&given);
//     for (int i = 1; i <=given; i++)
//     {
//         for (int j = 1; j <=given; j++)
//         {
//             printf("%d\t",++c);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// please enter the value
// 4
// 1    
// 23   
// 456  
// 78910

// #include<stdio.h>
// int main(){
//     int i=1,given,c=0;
//     printf("please enter the value\n");
//     scanf("%d",&given);
//     while (i<=given){
//         int j=1;
//         while (j<=i)
//         {
//             printf("%d",++c);
//             j++;
//         }
//         printf("\n");
//         i++;
//     }
    
    
// }
// please enter the value
// 4
// 1    
// 23   
// 456  
// 78910

#include <stdio.h>
int main()
{
    int i,j,k,c=0,given;
    printf("please enter the value\n");
    scanf("%d",&given);
    for (int i = 1; i <=given; i++)
    {
        for(k=1;k<=(given-i);k++){
            printf(" ");
        }
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",++c);
        }
        printf("\n");
    }
    return 0;
}