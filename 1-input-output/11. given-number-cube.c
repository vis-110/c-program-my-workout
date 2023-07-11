// 11. Write a C program to get two integers and print their cube.
// 	Expected Output:
// 	Input two integer values: 4  2
// 	cube of 4 is: 64
//  	cube of 2 is: 8
#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("please enter two value\n");
    scanf("%d%d",&a,&b);
    c=a*a*a;
    d=b*b*b;
    printf("cube of a: %d\n",c);
    printf("cube of b: %d\n",d);
    return 0;

}

// Output
// F:\start-c-program>output
// please enter two value
// 4
// 2
// cube of a: 64
// cube of b: 8

