#include <stdio.h>
int bigElement(int  num[]);

int main() {
  int result, num[5],i;
  printf("Input the element in the array\n");
  for ( i = 0; i < 5; i++)
  {
    printf("element - [%d] :",i);
    scanf("%d",&num[i]);
  }
  result = bigElement(num); 
  printf("Largest element in the array = %d", result);
  return 0;
}

int bigElement(int num[]) {
    int largest;
    largest = num[0];
  for (int i = 0; i < 5; i++) {
    if(largest < num[i]){
        largest = num[i];
    }
  }
return largest;
}