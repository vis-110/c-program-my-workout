    // Write a C program to find the BMI(Body Mass Index) is a person weight in kilograms divided by the square of height in meters.

    // 	Expected Output:
    // 	Input the weight in kg: 48
    // 	Input the height in cm: 168.5
    // 	BMI = 48 / (1.685)^2  = 16.9060219
    #include <stdio.h>
        int main()
    {
        float weight, height, meter, cmtometer, BMI;
        printf("Enter weight in kg \n");
        scanf("%f", &weight);
        printf("Enter height in cm \n");
        scanf("%f", &height);
        cmtometer = height / 100;
        meter = cmtometer * cmtometer;
        BMI = weight / meter;
        printf("Body Mass Index = %f \n", BMI);

        if (BMI <= 18.5)
        {
            printf("Underweight\n");
        }
        else if (BMI >= 18.5 && BMI <= 25)
        {
            printf("Normal\n");
        }
        else if (BMI >= 25 && BMI <= 30)
        {
            printf("OverWeight\n");
        }
        else if (BMI >= 30 && BMI <= 35)
        {
            printf("OverWeight\n");
        }
        else if (BMI >= 30 && BMI <= 35)
        {
            printf("Moving from overweight to obese\n");
        }
        else if (BMI >= 35 && BMI <= 40)
        {
            printf("Obesity\n");
        }
        return 0;
    }

    /*
    Enter weight in kg
    45
    Enter height in cm
    168
    Body Mass Index = 15.943878
    Underweight

    */