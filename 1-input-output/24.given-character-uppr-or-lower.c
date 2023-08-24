#include <stdio.h>
int main()
{
    char str[20],i;
    int A;
    printf("Enter the character : ");
    gets(str);

    for(i=0;str[i] != '\0';i++){
        if((str[i] >=65) && (str[i] <= 90)){
            A = str[i] + 32;
            printf("The give character is uppercase %d %c", A,A);
        }
        else
        printf("The give character not a uppercase");
    }
}