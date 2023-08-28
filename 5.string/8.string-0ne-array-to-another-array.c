#include <stdio.h>
void main()
{
    char str1[30], str2[30], i = 0;
    char x=67;
    printf("Enter the string : ");
    gets(str1);
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
        printf("i = %d\n",i);
        
    }
    printf("The copied second array\n");

        printf("%s\n",str2);
        printf("\n %d ",'A');
        printf("\n %d ",x);
    
}