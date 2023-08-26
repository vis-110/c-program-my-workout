#include<stdio.h>
int main(){
    float i,diff,terms,start,sum=0,z;
    printf("Input the starting number A.P");
    scanf("%f",&start);
    printf("Input the number terms A.P");
    scanf("%f",&terms);
    printf("Input the common difference of A.P");
    scanf("%f",&diff);
    printf("The sum of A.P series are\n");
    z=start;
    for(i=start;i<terms+z;i++){

            printf("%f ",start);
            sum=sum+start;
            start=start*diff;
    }
     printf("\n The sum of G.P series :  %f \n",sum);
}
// PS F:\start-c-program\3.looping> ./output
// Input the starting number A.P3
// Input the number terms A.P5
// Input the common difference of A.P2
// The sum of A.P series are
// 3.000000 + 6.000000 + 12.000000 + 24.000000 + 48.000000 + sum=93.000000