#include <stdio.h>
int main()
{
    char str[40],i;
    printf("Enter the character : ");
    gets(str);

    for ( i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        str[i] = 42;
    }
    printf("After replacing space with * is the strin : %s",str);
} 