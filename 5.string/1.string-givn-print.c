#include<stdio.h>
int main(){
    char str[6],i;
    printf("Enter the string: ");
   // fgets(str,sizeof(str),stdin);
   gets(str);
    for(i=0;i<6;i++){
        printf("%d\n",str[i]);
    }
    printf("The given enter string is : %stest",str);
}