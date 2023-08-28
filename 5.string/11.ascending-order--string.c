    #include <stdio.h>
    int main()
    {
        char str[100], small, temp;
        int i, j;
        printf("Input the string :");
        gets(str);
        small = str[0];
        for (i = 0; str[i] != '\0'; i++)
        {
            for (j = i + 1; str[j] != '\0'; j++)
            {
                if (str[i] > str[j])
                {
                    if (str[i] > str[j])
                    {
                        temp = str[i];
                        str[i] = str[j];
                        str[j] = temp;
                    }
                }
            }
        }
            printf("The ascending ordered string is : %s", str);
        return 0;
    }