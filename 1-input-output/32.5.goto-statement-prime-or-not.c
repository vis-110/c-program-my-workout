// #include <stdio.h>
// int main(){
//     int i=1,j=0,c,count;
//     printf("Please enter the number \n");
//     scanf("%d",&c);
//     they:

//     if((c%i) == 0){
//         j=j+1;
//     }
 
//     i =i+1;
//     if(i!=50){
//     goto they; 
//     }
//         if(j==2){
//         printf("%d - This number are prime number\n",c);
//     }
//     else
//     {
//         printf("%d - This number are not a prime number\n",c);
//     }
//    printf("total value - %d\n",i);
    
//     return 0;

// }

#include <stdio.h>
int main(){
    int n=0,Given,i=1,e;
    printf("Please enter the number \n");
    scanf("%d",&Given);
    they:

    if((Given%i) == 0){
        n=n+1;
    }
    i =i+1;

    if(i!=Given+1){
    goto they; 
    }
        if(n==2){
        printf("%d - This number are prime number\n",Given);
    }
    else
    {
        printf("%d - This number are not a prime number\n",Given);
    }
    
    return 0;

}