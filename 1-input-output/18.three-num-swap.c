// 18. Write a C program to swap three integers.
// 	Expected Output:
// 	Input the x,y and z values: 28  13  89

// 	Before Swapping
// 	value of x is: 28
// 	value of y is: 13 
// 	value of z is: 89

// 	After Swapping 
// 	value of x is: 13
// 	value of y is: 89
// 	value of z is: 28

#include<stdio.h>
int main(){
    int a,b,c,f;
    printf("Please Enter the three values\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("Before Swapping\n");
    printf("value of a is: %d\n",a);
    printf("value of b is: %d\n",b);
    printf("value of c is: %d\n",c);
    f=a;
    a=b;
    b=c;
    c=f;
    printf("After Swapping\n");
    printf("value of a is: %d\n",a);
    printf("value of b is: %d\n",b);
    printf("value of c is: %d\n",c);
    return 0;
}
// F:\start-c-program>output
// Please Enter the three values
// 7 6 8
// Before Swapping
// value of a is: 7
// value of b is: 6
// value of c is: 8
// After Swapping
// value of a is: 6
// value of b is: 8
// value of c is: 7