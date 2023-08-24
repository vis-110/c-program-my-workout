    #include <stdio.h>
    int main()
    {
        char str1[100]="the particulr a of range", str3[100], str2[100];
        int temp1 = 0, temp2 = 0, i, j, count = 0,
            small,c=0, big = 0, smallIndex, bigIndex;
        printf("Input the string : ");
        printf("Given string is: %s\n", str1);
        for (i = 0; str1[i] != '\0'; i++)
        {
            if (str1[i] == ' ')
            {
                if(!c){
                    small = temp1;
                    c++;
                }
                temp1 = 0;
                
            }

            temp1++;
            printf("i 1 = %d\n", i);
    
            if (small > temp1)
            {
                small = temp1;
                smallIndex = i;
                printf("i 2 = %d\n", i);
            }
            printf("small - %d ", small);
            printf("smallIndex - %d \n", smallIndex);
            if (big < temp1)
            {
                big = temp1;
                bigIndex = i;
                printf("big - %d ", big);
                printf("biglIndex - %d \n", bigIndex);
            }
            printf("temp - %d \n", temp1);
        }
        for (j = smallIndex; (smallIndex - small) <= j; j--)
        {
            str2[count] = str1[smallIndex];
            count++;
        }
        count = 0;
        for (j = bigIndex; (bigIndex - big) <= j; j--)
        {
            str3[count] = str1[bigIndex];
            count++;
        }

        printf("The largest word is  %s and the  smallest word is %s  in the sting : %s\n", str3, str2, str1);
        return 0;
    }