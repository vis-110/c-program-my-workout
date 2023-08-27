#include<stdio.h>
int main(){
    int i,given,sum=0;
    printf("Input the number of elements to store in the array : \n");
    scanf("%d",&given);
    int a[given],b[given];
    printf("Input %d elements in the array: \n", given);
    for (i = 0; i < given; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
        b[i]=a[i];
    }
    int limit=given-1;
    for(i=0;i<limit;i++){
    a[i+1]=(a[i]<a[i+1])? a[i+1]:a[i];

    b[i+1]=(b[i]<b[i+1])?b[i]:b[i+1];
    }
    printf("Maximum Element : %d\n",a[limit]);
    printf("Minimum Element : %d\n",b[limit]);
    return 0;
} 