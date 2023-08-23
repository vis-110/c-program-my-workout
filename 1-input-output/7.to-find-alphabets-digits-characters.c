    #include <stdio.h>
    int main()
    {
        char str[30], temp1 = 0, temp2 = 0, temp3 = 0, i = 0;
        printf("Enter the string : ");
        fgets(str, sizeof(str), stdin);

        while (str[i] != '\0')
        {
            if ((97 <= str[i]) && (str[i] <= 122))
            {
                temp1++;
            }
            else if ((48 <= str[i]) && (str[i] <= 57))
            {
                temp2++;
            }n
            else
            {
                temp3++;
            }

            i++;
        }

        printf("The string alphabets character are : %d\n", temp1);
        printf("The string digit number are : %d\n", temp2);
        printf("The string special character are : %d\n", temp3);
    }