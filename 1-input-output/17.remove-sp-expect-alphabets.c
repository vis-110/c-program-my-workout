#include <stdio.h>
void main()
{
    char str[50];
    int i, z;
    printf("Enter the string : ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        start:
        
        if (((str[i] >= 32) && (str[i] <= 47)) ||
            ((str[i] >= 58) && (str[i] <= 64)) ||
            ((str[i] >= 92) && (str[i] <= 96)) ||
            ((str[i] >= 48) && (str[i] <= 57)) ||
            ((str[i] >= 123) && (str[i] <= 126)))
        {

            for (z = i; str[z] != '\0'; z++)
            {
                str[z] = str[z + 1];
            }
            for (z = i; str[z] != '\0'; z++)
            {
                if (((str[i] >= 32) && (str[i] <= 47)) ||
                    ((str[i] >= 58) && (str[i] <= 64)) ||
                    ((str[i] >= 92) && (str[i] <= 96)) ||
                    ((str[i] >= 48) && (str[i] <= 57)) ||
                    ((str[i] >= 123) && (str[i] <= 126)))
                {
                    goto start;
                }
            }
        }
    }

    printf("after remove string : %s", str);
}