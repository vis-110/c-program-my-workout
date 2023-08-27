

    #include <stdio.h>
    int main()
    {
        int i, j, given, count = 0;
        printf("Input the number of elements to store in the array : ");
        scanf("%d", &given);
        int array[given],b[given];
        for (i = 0; i < given; i++)
        {
            printf("element - %d : ", i);
            scanf("%d", &array[i]);
        }
        printf("The unique elements found in the array are :  ");
        for (i = 0; i < given; i++)
        {
            for (j = 0; j < given; j++)
            {
            if(array[i] == array[j]){
                count++;
            }
            
            }
            if(count == 1){
            // b[i]=array[i];
                printf("%d ",array[i]);
            }
            count=0;
        }
        // for(i = 0; i< given; i++)
        // {
        //     printf("b[%d] : %d\n", i, b[i]);
        // }
    return 0;
    
    }

    Input the number of elements to store in the array : 6
    element - 0 : 1
    element - 1 : 4
    element - 2 : 2
    element - 3 : 4
    element - 4 : 5
    element - 5 : 1
    The unique elements found in the array are :  2 5 