#include<stdio.h>
void removespace(char str[]);
int main(){
    char str[100];
    printf("Input the string : ");
    gets(str);
    removespace(str);
    return 0;
}
void  removespace(char str[]){
    int i,j;
    for ( i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' '){
            j=i;
            while (str[j] !='\0')
            {
                str[j] = str[j+1];
                
                j++;
            }
            
        }
    }
    printf("After the string : %s",str);
}
