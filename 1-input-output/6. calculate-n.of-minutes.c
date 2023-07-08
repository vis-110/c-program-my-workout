// 6. Write a C program that takes hours and minutes as input, and calculates the total number of minutes.
// 	Expected Output :
// 	Input hours: 5
// 	Input minutes: 37
// 	Total: 337 minutes.
#include <stdio.h>
int main(){
    int a,b,c,g;
    printf("Please Enter the hours and mints\n");
    scanf("%d %d",&g,&b);
    a=g*60;
    c=a+b;
    printf("number of total mints : %d",c);    
    return 0; 
}
// Output
// Please Enter the hours and mints
// 5
// 37
// number of total mints : 337
