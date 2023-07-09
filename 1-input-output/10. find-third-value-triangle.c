
// 10. Write a C program to find the third angle of a triangle if two angles are given. 
// 	Expected Output :
// 	Input two angles of triangle separated by comma : 50,70
// 	Third angle of the triangle : 60
#include <stdio.h>
int main(){
    int a,b,c;
    printf("please enter two side value\n");
    scanf("%d,%d", &a,&b);
    c= 180-a-b;
    printf("Third triangle value : %d",c);
    return 0;
}

// Output
// please enter two side value
// 4,78
// Third triangle value : 98
// 