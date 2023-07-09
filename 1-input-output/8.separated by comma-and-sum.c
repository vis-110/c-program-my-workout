// 8. Write a program in C to calculate the sum of three numbers with input on one line separated by a comma.
// 	Expected Output :
// 	Input three numbers separated by comma : 5,10,15
// 	The sum of three numbers : 303
#include <stdio.h>
int main(){
    int i,j,k,sum;
    printf("Enter three value");
    scanf("%d,%d,%d",&i,&j,&k);
    sum = i+k+j;
    printf("sum of three number:%d\n",sum);
    return 0;
}

// F:\start-c-program>output
// Enter three value3,4,5
// sum of three number:12