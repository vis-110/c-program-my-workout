#include <stdio.h>
int main()
{
    char str[40],temp =0;
    printf("Enter the character : ");
    gets(str);

        if (((str[temp] >= 48) && (str[temp] <= 57)) || ((str[temp] >= 65) && (str[temp] <= 70)))
        {
            printf("The entet the character is a hexadecimal digit");
        }
        else
            printf("The entet the character is not a hexadecimal digit");
    
}