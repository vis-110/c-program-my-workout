// 2. Write a program that converts Centigrade to Fahrenheit. 
// 	Expected Output :
// 	Input a temperature (in Centigrade): 45
// 	113.000000 degrees Fahrenheit. 

#include <stdio.h>
int main(){
    float c,F;
    printf("Please Enter centigrade range\n");
    scanf("%f",&c);
    F = (c*9/5)+32;
    printf("Fahranheit value : %f",F);    
    return 0;
}
// outputF:\start-c-program>output
// Please Enter centigrade range
// 45
// Fahranheit value : 113.000000