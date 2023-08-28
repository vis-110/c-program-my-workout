#include <stdio.h>
int mainrepeat(char str[]);

void main()
{
    int i;
    char str[100], result;
    printf("Input the string : ");
    gets(str);
    result = mainrepeat(str);
    if (result)
        printf("The first repeated character is : %c", result);
    else
        printf("There are no repected character in this string");
}
int mainrepeat(char str[])
{
    int i, j, temp = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
                temp++;
        }

        if (temp > 1)
        {
            printf("%c\n", str[i]);
            return str[i];
        }
        else if(temp == 0)
        return 0;

        temp = 0;
    }
    
}
