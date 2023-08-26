#include<stdio.h>
int main(){
    int i,diff,terms,start,sum=0;
    printf("Input the starting number A.P : ");
    scanf("%d",&start);
    printf("Input the number terms A.P : ");
    scanf("%d",&terms);
    printf("Input the common difference of A.P : ");
    scanf("%d",&diff);
    printf("The sum  of A.P series are\n");
    for(i=start;i<terms+start;i++){
        if(i<terms){
            printf("%d + ",start);
            sum=sum+start;
            start=start+diff;
        }
        else{
            printf("%d = ",start);
            sum=sum+start;
        }
      
    }
     printf("%d",sum);
}

// PS F:\start-c-program\3.looping> ./output
// Input the starting number A.P1
// Input the number terms A.P10
// Input the common difference of A.P4
// The sum of A.P series are
// 1 + 5 + 9 + 13 + 17 + 21 + 25 + 29 + 33 + 37 = 190