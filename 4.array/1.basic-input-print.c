// 1. Write a program in C to store elements in an array and print them.
// 	Test Data :
// 	Input 10 elements in the array :
// 	element - 0 : 1
// 	element - 1 : 1
// 	element - 2 : 2
// 	.......
// 	Expected Output :
// 	Elements in array are: 1 1 2 3 4 5 6 7 8 9
#include<stdio.h>
int main(){
    int i,array[10];
    printf("Input 10 elements in the array : \n");
    for(i=0;i<10;i++){
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }

    printf("Elements in array are : ");
    for(i=0;i<10;i++){
        printf("%d " ,array[i]);
    }
}

// PS F:\start-c-program\array> ./output
// Input 10 elements in the array : 
// element - 0 : 1
// element - 1 : 1
// element - 2 : 2
// element - 3 : 3
// element - 4 : 4
// element - 5 : 5
// element - 6 : 6
// element - 7 : 7
// element - 8 : 8
// element - 9 : 9
// Elements in array are : 1123456789