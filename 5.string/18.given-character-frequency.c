// #include <stdio.h>
// int main()
// {
//     char str[20], str1[] ="i";
//     int i, temp = 0,temp2=0;
//     printf("Enter the string : ");
//     gets(str);

//     for (i = 0; str[i] != '\0'; i++)
//     {
//         printf("i = %s\n",str[i]);
//         printf("giv = %c\n",str1);
//         if(str[i] == str1[temp2]){
//             temp++;
//         }
//     }
//     printf("The frequence of \"%s\" is: %d", str1, temp);
// }

#include <stdio.h>
int main()
{
    char str2[1], temp2 = 0,i,buffer;
    int temp1 = 0,given;
    printf("Enter the given character for find frequency of character : ");
    gets(str2);

    printf("Enter the number in given : ");
     scanf("%d",&given);
    char str1[given];
    scanf("%c",&buffer);
    printf("Enter the string : ");
    gets(str1);

    for (i = 0; str1[i] != '\0'; i++)
    {

        if (str1[i]== str2[temp2] )
        {
            temp1++;
        }
    }
    printf("The frequence of \"%s\" is : %d",str2, temp1);
}