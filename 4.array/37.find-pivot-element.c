#include<stdio.h>
int main(){
    int i,start,end,mid,given;
    printf("Enter the number of element in the array : ");
    scanf("%d",&given);
    int arr[given];
    for(i=0;i<given;i++){
        scanf("%d",&arr[i]);
    }
    start = 0;
    end = given -1;
    start:
    mid = (start + end)/2;
    if(arr[mid] > arr[mid+1]){
        printf("The pivot element in the array %d",arr[mid+1]);
    }
    else{
        if(arr[start] > arr[mid]){
            // first part
            end = mid -1;
        }
        else
        {
            // second part
            start = mid +1;
        }
        goto start;
    }

    return 0;
}