// #include<stdio.h>
// int main(){
//     int i,j,k,temp;
//     for(i=1,j=1,k=1;i<=10;i++){
//         printf("%d",k);
        
//         temp=j;
//         j=k;
//         k=temp;
//         k=j+k;

//     }
//     return 0;
// }


// Program to calculate the sum of array elements by passing to a function 

#include <stdio.h>
void calculateSum(int  num[]);

int main() {
  int result, num[5],i;
  for ( i = 0; i < 5; i++)
  {
    printf("element - [%d] :",i);
    scanf("%d",&num[i]);
  }
  
  // num array is passed to calculateSum()
  calculateSum(num); 
  printf("Largest element in the array = %d", calculateSum(num));
  return 0;
}

void calculateSum(int num[]) {
    int largest;
    largest = num[0];
  for (int i = 0; i < 6; i++) {
    if(largest < num[i]){
        largest = num[i];
    }
  }

}