#include <stdio.h>
int main()
{
    char str[20], i, temp = 0;
    printf("Enter the string : ");
    gets(str);
    for (i = 0;str[i] != '\0'; i++)
    {
        
            printf("%c  ",str[i]);
            temp++;
        
    }
    printf("\nThe given enter string is : %d", temp);
}