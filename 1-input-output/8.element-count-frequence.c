
    #include <stdio.h>
    int main()
    {
        int i, given, sum = 0, temp = 0, c = 0, z, j;
        printf("Input the number of elements to store in the array : \n");
        scanf("%d", &given);
        int array[given],b[given];
        for (i = 0; i < given; i++)
        {
            printf("element - %d : ", i);
            scanf("%d", &array[i]);
        }
        
        for (i = 0; i < given; i++)
        {

            for (z = 0; z < i; z++)
            {
                if (b[z] == array[i])
                {
                    temp++;
                }
            }
            if (temp == 0)
            {
                for (j = 0; j < given; j++)
                { 

                    if (array[i] == array[j])
                    
                    {

                        c++;
                            b[i] = array[i];
                        
                    }
                }
                printf("%d occurs %d times\n",array[i],c);
                sum = sum + c;
            }
            c = 0;
            temp=0; 
        }
        return 0;
    }