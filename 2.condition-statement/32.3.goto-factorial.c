// #include <stdio.h>
// int main(){
//     int Given,f=1,a=0;
//     printf("please enter the number to find fatorial\n");
//     scanf("%d",&Given);
//     entry:
//     f=f*(Given-a);
//     a++;
//     if(Given!=a){
//         goto entry;
//     }
//     printf("The Given number %d factorial is: %d\n",a,f);
//     return 0;
// }

// different datatype using forloop find result

#include <stdio.h>
int main()
{
    float Given, i = 6.123, f = 1, a = 0,z=99;
    printf("please enter the number to find fatorial\n");
    scanf("%f", &Given);

    for (int z = 1.65; z <= Given; z++)
    {
        printf("%d\n", z);
        a = a + z;
    }

    printf("second-%f\n", i);
    printf("second-%f\n", z);
    printf("The Given number sum %f\n", a);
    return 0;
}