// 2. Write a program in C to read n number of values in an array and display them in reverse order.
// 	Test Data :
// 	Input the number of elements to store in the array :3
// 	Input 3 number of elements in the array :
// 	element - 0 : 2
// 	element - 1 : 5
// 	element - 2 : 7
// 	Expected Output :
// 	The values store into the array are :
// 	2 5 7
// 	The values store into the array in reverse are :
// 	7 5 2

#include<stdio.h>
int main(){
    int i,given;
    printf("Input the number of elements to store in the array : \n");
    scanf("%d",&given);
    int array[given];
    for(i=0;i<given;i++){
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }

    printf("the value store into the array are: \n");
    for(i=0;i<given;i++){
        printf("%d ",array[i]);
    }
    printf("\nthe value store into the array in reverse: \n");
    for(i=given-1;i>=0;i--){
        printf("%d ",array[i]);
    }
}
// PS F:\start-c-program\array> ./output
// Input the number of elements to store in the array :
// 4
// element - 0 : 1
// element - 1 : 2
// element - 2 : 3
// element - 3 : 4
// the value store into the array are: 
// 1234
// the value store into the array in reverse:    
// 4321