#include <stdio.h>
int findMax(int  num[]);
int findMin(int  num[]);
int main() {
  int result, result2, num[5],i;
  printf("Input the element in the numay\n");
  for ( i = 0; i < 5; i++)
  {
    printf("element - [%d] :",i);
    scanf("%d",&num[i]);
  }
  result = findMax(num); 
  printf("maximum element in the array = %d\n", result);
  result2 = findMin(num);
  printf("mininum element in the array = %d\n", result2);
  return 0;
}

int findMax(int num[]) {
    int largest;
    largest = num[0];
  for (int i = 0; i < 5; i++) {
    if(largest < num[i]){
        largest = num[i];
    }
  }
return largest;
}

int findMin(int num[]) {
    int lowest;
    lowest = num[0];
  for (int j = 0; j < 5; j++) {
    if(lowest > num[j]){
        lowest = num[j];
    }
  }
return lowest;
}