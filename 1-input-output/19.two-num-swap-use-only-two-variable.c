// 19. Write a C program to swap two integers without using any extra variables, only use two variables.
// 	Expected Output:
// 	Input the m and n value: 76  43
// 	Before Swapping: m = 76, n = 43 
// 	After Swapping: n = 76, m = 43

#include <stdio.h>
int main(){
    int m,n;
    printf("Please Enter the two values\n");
    scanf("%d %d",&m,&n);
    printf("Before Swapping: m = %d, n = %d\n",m,n);
    m=m-n;
    n=n+m;
    m=n-m;
    printf("After Swapping: m = %d, n = %d\n",m,n);
    return 0;
}
// output
// F:\start-c-program>output
// Please Enter the two values
// 45 65
// Before Swapping: m = 45, n = 65
// After Swapping: m = 65, n = 45