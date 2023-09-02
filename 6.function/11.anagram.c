// 11. Write a program in C to check whether two given strings are an anagram.
// Test Data :
// Input the first String : spare
// Input the second String : pears
// Expected Output :

//  spare and pears are Anagram.

#include <stdio.h>
#include <string.h>
void anagram();
void main()
{
    printf("Before calling\n");
    anagram();
    printf("After calling\n");
    printf("End the process");
}
void anagram()
{
    int given1, given2, temp = 0, temp2 = 0, temp3 = 0, temp4 = 0, count = 0;
    char buffer;

    printf("Input the total number of element in the first array : ");
    scanf("%d", &given1);
    scanf("%c", &buffer);

    char str1[given1], i, j;
    printf("Input the string in first array\n");
    gets(str1);
    printf("Input the total number of element in the second array : ");
    scanf("%d", &given2);
    scanf("%c", &buffer);
    char str2[given1];

    printf("Input the string in second array :\n");
    gets(str2);
    printf("given sting 1: %s\ngiven string 2: %s\n", str1, str2);
    for (i = 0; str1[i] != '\0'; i++)
    {
        for (j = i; str1[j] != str1[0]; j--)
        {
            if (i != j)
            {
                if (str1[i] == str1[j])
                {
                    temp++;
                }
            }
        }

        if (temp == 0)
        {
            count++;
            for (j = 0; str1[j] != '\0'; j++)
            {
                if (str1[i] == str1[j])
                {
                    temp2++;
                }
            }

            for (j = 0; str2[j] != '\0'; j++)
            {
                if (str1[i] == str2[j])
                {
                    temp3++;
                }
            }

            if (temp2 == temp3)
            {
                temp4++;
            }
            else{
                printf("%s and %s is not a anagram words\n", str1, str2);
                return 0;
            }
        }

        temp = 0;
        temp2 = 0;
        temp3 = 0;
    }

    if (temp4 == count)
        printf("%s and %s is a Anagram Words\n", str1, str2);
}

// Output :
// Before calling
// Input the string in first array
// heart
// Input the string in second array :
// earth
// heart and earth is a Anagram Words
// After calling
// End the process