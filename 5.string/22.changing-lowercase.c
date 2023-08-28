#include <stdio.h>
int main()
{
    char str[20],i,temp;
    printf("Enter the string : ");
    gets(str);
    for ( i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 65)&&(str[i] <= 90)){
            str[i] = str[i] + 32;
        }       
    }
    
    printf("After the string conversion is : %s", str);
}