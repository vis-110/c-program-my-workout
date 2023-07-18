// #include <stdio.h>
// int main(){
//     int i=1;
//     entry:
//     if((i%2) == 0){
//         printf("%d this nuber are even number\n",i);
//     }
//     i=i+1;
//     if(i == 7){
//         printf("the program crashed\n");
//         return 0;
//     }
//     if(i!=20){
//         goto entry;
//     }
//     return 0;
// }

// Another method

#include <stdio.h>
int main(){
    int i=4;
    
    if((i%2) == 0){
        printf("%d this nuber are even number\n",i);
    }
    i=i+1;
        if(i!=20){
        goto entry;
    }
    entry:
    if(i){
        printf("the program crashed\n");
        return 0;
    }

    return 0;
}