    Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer. 

    The charge are as follow :
	Unit Charge/unit
	upto 199 @1.20
	200 and above but less than 400 @1.50
	400 and above but less than 600 @1.80
	600 and above @2.00

	If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-

    #include <stdio.h>
    int main()
    {
        float a, b, c, d, e;
        int customerId;
        printf("Enter customer Id\n");
        scanf("%d", &customerId);
        printf("Enter unit consumed\n");
        scanf("%f", &a);
        if (a > 0 && a <= 190)
        {
            c = a * 1.20;
            e = 1.20;
        }
        else if (a >= 200 && a <= 400)
        {
            c = a * 1.50;
            e = 1.50;
        }
        else if (a >= 400 && a <= 600)
        {
            c = a * 1.80;
            e = 1.80;
        }
        else if (a >= 600)
        {
            c = a * 2;
            e = 2;
        }

        if (c >= 400)
        {
            b = (c * 15) / 100;
            d = c + b;
        }
        else
        {
            d = c;
        }

        printf("Customer Id No: %d\n", customerId);
        printf("Customer Name : James\n");
        printf("Unit consumed : %.2f\n", a);
        printf("Amount charge:@ %.2f per unit: %.2f\n", e, c);
        printf("Surcherge Amount : %.2f\n", b);
        printf("Net amound paid By the cusomer : %.2f\n", d);

        return 0;
    }


    Enter customer Id
    34567
    Enter unit consumed
    300
    Customer Id No: 34567
    Customer Name : James
    Unit consumed : 300.00
    Amount charge:@ 1.50 per unit: 450.00
    Surcherge Amount : 67.50
    Net amound paid By the cusomer : 517.50