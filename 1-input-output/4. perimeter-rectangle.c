// 4.  Write a C program that prints the perimeter of a rectangle using its height and width as inputs.
// 	Expected Output :
// 	Input the height of the Rectangle : 5
// 	Input the width of the Rectangle : 7
// 	Perimeter of the Rectangle is : 24.000000
#include <stdio.h>
int main(){
    float l,w,p;
    printf("Enter the value in length and width\n");
    scanf("%f%f", &l,&w);
    p =2*(l+w);
    printf("Perimeter of the Rectangle : %f",p);    
    return 0;
}
// output
// F:\start-c-program>output
// Enter the value in length and width
// 5
// 7
// Perimeter of the Rectangle : 24.000000