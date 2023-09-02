    // #include <stdio.h>

    // int armstrong(int given)
    // {
    //     int i, j, z, c = 0, b = 0, armresult, sum = 1, temp = 0,perfect=0, count = 0;

    //     printf("input the decimal number : ");
    //     scanf("%d", given);
    //     for (i = given; i != 0; i = (i / 10))
    //     {
    //         count++;
    //     }
    //     for (i = given; i != 0; i = (i / 10))
    //     {
    //         armresult = i % 10;
    //         for (j = 0; j < count; j++)
    //         {
    //             sum = sum * armresult;
    //         }

    //         temp = temp + sum;
    //         sum = 1;
    //     }
    //     if (temp == given)
    //         printf("This number %d is armstrong number\n",given);
    //     else
    //         printf("This number %d is not armstrong number\n",given);


    //     for (z = 1; z < given; z++)
    //     {
    //         if((given%z) == 0){
    //             perfect = perfect +z;
    //         }
    //     }
    //     if(perfect == given)
    //     printf("This number %d is perfect number\n",given);
    //     else
    //     printf("This number %d is not a perfect number\n",given);

    //     return 0;
    // }

    // int main()
    // {
    //     int given;
    //     printf("Before calling\n");
    //     armstrong(&given);
    //     printf("\nAfter calling \n");
    //     return 0;
    // }


    #include <stdio.h>

    int armstrongNum(int);

    int perfectNum(int);


    void main()
    {
        int given,A,B;
        printf("Input the number : ");
        scanf("%d",&given);

        A = armstrongNum(given);
        B = perfectNum(given);
        if(A == 1)
        printf("This number is a Armstrong number\n");
        else
        printf("This number is not a Armstrong number\n");

        if(B == 1)
        printf("This number is a perfect number\n");
        else
        printf("This number is not a perfect number\n");
    }
            
    int armstrongNum(int given)
    {
        int i, j, armresult, sum = 1, temp = 0,count = 0;

        for (i = given; i != 0; i = (i / 10))
        {
            count++;
        }
        for (i = given; i != 0; i = (i / 10))
        {
            armresult = i % 10;
            for (j = 0; j < count; j++)
            {
                sum = sum * armresult;
            }

            temp = temp + sum;
            sum = 1;
        }
        if (temp == given)
        return 1;
        else
        return 0;

    }

    int perfectNum(int given){
        int z,perfect=0;
        for (z = 1; z < given; z++)
        {
            if((given%z) == 0){
                perfect = perfect +z;
            }
        }
        if(perfect == given)
        return 1;
        else
        return 0;
    }
