#include <stdio.h>

char findi(char str[], char);
char spacefill(char str[]);

void main()
{
    char str[70], given;
    int A;
    printf("Input the string : ");
    gets(str);
    printf("Input find character :");
    scanf("%c", &given);
    A = findi(str, given);
    spacefill(str);
    printf("Total numer of %c character repete : %d",given, A);
}
char findi(char str[], char given)
{
    int i, temp=0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == given)
        temp++;
    }
    return temp;
}

char spacefill(char str[])
{
    int i;
    for ( i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 32){
        str[i] = '*';
        }
    }
    printf("%s\n",str);
    return 0;
}

