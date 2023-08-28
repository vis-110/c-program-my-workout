    #include <stdio.h>
    void main()
    {
        char str1[30], vowel[] = "aeiouAEIOU";
        int temp1 = 0, temp2 = 0, temp3 = 0, i = 0, j = 0;
        printf("Enter the string : ");
        gets(str1);

        while (str1[i] != '\0')
        {
            for (j = 0; vowel[j] != '\0'; j++)
            {
                if (str1[i] == vowel[j])
                {
                    temp1++;
                    break;
                }
                else 
                {
                    if (((97 <= str1[i]) && (122 >= str1[i])) || ((65 <= str1[i]) && (90 >= str1[i])))
                    {
                        temp2++;
                    }
                }
            }
            if (temp2 == 10)
                temp3++;

            temp2 = 0;
            i++;
        }
        printf("The total number of vowel characters : %d\n", temp1);
        printf("The total number of consonent characters : %d\n", temp3);
    }