#include <stdio.h>
void main()
{
    char str[30], majorchar;
    int i, j, z, temp = 0, temp1 = 0, temp3 = 0;

    printf("input the string are : ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        for (z = i; z >= 0; z--)
        {
            if (i != z)
            {
                if (str[i] == str[z])
                    temp++;
            }
        }

        if (temp == 0)
        {
            for (j = 0; str[j] != '\0'; j++)
            {
                if (str[i] == str[j])
                    temp1++;
            }
            printf("temp1 = %d\n", temp1);
            if (temp3 < temp1)
            {
                temp3 = temp1;
                majorchar = str[i];
            }
        }
        temp1 = 0;
    }

    printf("The string major character is : %c", majorchar);
}