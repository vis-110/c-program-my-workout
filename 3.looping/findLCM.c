// 41.(45) Write a program in C to find the LCM of any two numbers.
// 	Test Data :
// 	Input 1st number for LCM: 15
// 	Input 2nd number for LCM: 20
// 	Expected Output :
// 	The LCM of 15 and 20 is : 60

#include<stdio.h>
int main(){
    int i,j,fInput,sInput,c,d;
    printf("first input : ");
    scanf("%d",&fInput);
    printf("second input : ");
    scanf("%d",&sInput);
    for(i=1;i<=10;i++){
            c=fInput*i;
            for(j=1;j<=10;j++){
                d=sInput*j;
                if(c==d){
                    printf("The LCM of %d and %d is: %d \n",fInput,sInput,c);
                    i=11;
                    break;
                    //(i=11,break;) or using (return 0);
                    
                }
            }
    }
    return 0;
}

        first input : 10
        second input : 4
        The LCM of 10 and 4 is: 20 