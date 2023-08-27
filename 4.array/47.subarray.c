#include <stdio.h>
int main()
{
    int i, j, z, temp = 0, given,sum,index;
    printf("Enter no of elements\n");
    scanf("%d", &given);
    int arr[given];

    for (i = 0; i < given; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    printf("The Given array is : ");
    for (i = 0; i < given; i++)
    {
        printf("%d\n", arr[i]);
    }
    index = given-1;
    for(i=0;i<given;i++){
        sum = arr[i]+ arr[i+1];   
        for(j=i+1;j<given;j++){
            if(index == sum){
                printf("[%d...%d]",i,j);
                printf("{");
                for ( z = i; z <=j; z++)
                {
                    printf("%d ",arr[z]);
                }
                printf("}\n");
            }
            temp = sum + arr[j+1];
            sum = temp;
        }
        
    }
    return 0;
}