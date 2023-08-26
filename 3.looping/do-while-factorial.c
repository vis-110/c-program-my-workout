// #include<stdio.h>
// int main(){
//     int given,sum=1,a;
//     printf("please enter the value\n");
//     scanf("%d",&given);
//     a=given;
//     do{
//         sum = sum*given;
//         given--;
//     }while (0<given);
//     printf("the factorial of %d is :%d\n",a,sum);
// }

#include <stdio.h>
int main()
{
    float terms, x, factorial = 1, a = 1, tSum = 1, i, j,k,e, division;
    int sign = 0;
    printf("please enter the no of terms\n");
    scanf("%f", &terms);
    printf("please enter the X value\n");
    scanf("%f", &x);
    for (i = 2; i < terms*2; i = i + 2)
    {
        for (j = i; j > 0; j--)
        {
            factorial = factorial * j;
            a = a * x;
        }
        division = a / factorial;
        for (k = 1; k <= 1; k++)
        {
            sign++;
            if ((sign % 2) == 0)
            {
                e=division * 1;
            }
            else
            {
                e=division * (-1);
            }
            a = 1;
        factorial = 1;
        }
        tSum=tSum+e;
    }
    printf("The sum of : %f\n",tSum);
    printf("Number of terms : %f\n",terms);
    printf("Value of x: %f\n",x);

    return 0;
}

// #include<stdio.h>
// int main(){
//     float given,sum=0,d=1,division;
//     int i;
//     printf("please enter the input number terms");
//     scanf("%d",&given);
//     for(i=1;i<=given;i++){
//         division= (float)(d/i);
//         printf("division%f\n given %f\n ",given,division);
//         sum=sum+division;
//         printf("sum%f\n",sum);

//     }
//   //  printf("sum of series upto %d terms: %f\n",given,sum);
//   return 0;
//}

// #include <stdio.h>
// int main(){
//     int arr[5],i;
//     for(i=0;i<5;i++){
         
//         scanf("%d",& arr[i]);
//         arr[i]=arr[i]+1;
//     }
//     for(i=0;i<5;i++){
//         printf("a[%d] = %d\n",i,arr[i]);
//     }
// }