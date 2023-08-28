#include <stdio.h>
int wordCount(char str[], char str2[]);

void main()
{
    char str1[100], str2[30], buffer;
    int result;
    printf("Input the string :");
    gets(str1);
    printf("Input the check word string :");
    gets(str2);
    result = wordCount(str1, str2);
    printf("The frequency of the word '%s' is : %d \n", str2, result);
}

int wordCount(char str1[], char str2[])
{
    int i, j, temp1 = 0, temp2 = 0, count = 0;
    for (j = 0; str2[j] != '\0'; j++)
    {
        count++;
    }
    for (i = 0; str1[i] != '\0'; i++)
    {
        while (str2[temp1] == str1[i])
        {
            temp1++;
            continue;
        }
        printf("count and temp1 = %d and %d and %c and %d\n",count,temp1,str1[i],i);
            if ((temp1 == count) && (str1[i] == ' '))
            {
                        printf("and %c , %d , and %d\n",count,temp1,str1[i],str1[i],i);

                temp2++;
                temp1 = 0;
            }
        
    }
    return temp2;
}