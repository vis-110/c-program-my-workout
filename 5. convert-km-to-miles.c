// 5.  Write a C program that converts kilometers per hour to miles per hour.
// 	Expected Output :
// 	Input kilometers per hour: 15
// 	9.320568 miles per hour
#include <stdio.h>
int main(){
    float a,b;
    printf("Enter the kilometers value\n");
    scanf("%f",&b);
    a=b/1.609344;
    printf("miles : %f",a);    
    return 0;
}
// Output
// F:\start-c-program>output
// Enter the kilometers value
// 15
// miles : 9.320568