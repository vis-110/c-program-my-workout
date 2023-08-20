//  #include <stdio.h>
//  int main(){
//     int i,given,c;
//     printf("Input the number (table to be calculated):15\n");
//     scanf("%d",&given);
//     for(i=1;i<=10;i++){
//         c=given*i;
//         printf("%d*%d=%d\n",given,i,c);
//     }
//     return 0;
//  }

 #include <stdio.h>
 int main(){
    int i,j,multiple,given;
    printf("Input the number table number starting from 1:8\n");
    scanf("%d",&given);
    for(i=1;i<=given;i++){
        for(j=1;j<=8;j++){
        multiple=j*i;
        printf("%d*%d=%d ",j,i,multiple);
    }
    return 0;
 }