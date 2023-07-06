
// 3. Write a C program that calculates the volume of a sphere. 
// 	Expected Output :
// 	Input the radius of the sphere : 2.56
// 	The volume of sphere is 70.276237.
#include <stdio.h>
int main(){
    float v,r,a;
    printf("Please Enter the radious value\n");
    scanf("%f",&r);
    v= 1.333333*3.1415*r*r*r;
    printf("sphere radious : %f",v);    
    return 0;
}
// output
// F:\start-c-program>output
// Please Enter the radious value
// 2.06
// sphere radious : 36.616543