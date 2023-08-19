#include <stdio.h>

void myFunction(int *given)
{
    int i, c = 0,b=0;

    printf("input the decimal number : ");
    scanf("%d", given);
    for (i = *given; i != 0; i = (i / 2))
    {
        c++;
    }
    
    int remainder[c];
    for (i = *given; i != 0; i = i / 2)
    {
        remainder[b] = i % 2;
        b++;
    }

    for(i=0;i<c;i++){ 
        printf("%d ",remainder[i]);
    }

}

int main(){
    int given;
    printf("Before calling\n");
    myFunction(&given);
    printf("\nAfter calling \n");
}

// Before calling
// input the decimal number : 65
// 1 0 0 0 0 0 1 
// After calling calling