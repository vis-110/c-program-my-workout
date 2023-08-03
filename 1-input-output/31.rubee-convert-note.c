#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, v, y, rupee500, rupee100, rupee50, rupee20, rupee10, rupee5, rupee2, rupee1;
    
    printf("Enter rupees \n"); 
    scanf("%d", &y);
    a = y - 500;
    if (a < 0)
    {
        rupee500 = 0;
        a = y;
    }
    else
    { 
        rupee500 = y;
        rupee500 = (rupee500) / 500;
        v = rupee500 * 500;
        a = y - v;
    }
    printf("500-%d\n", rupee500);

    b = a - 100;
    if (b <= 0)
    {
        rupee100 = 0;
        b = a;
    }
    else
    {
        rupee100 = a;
        rupee100 = (rupee100) / 100;
        v = rupee100 * 100;
        b = a - v;
    }
    printf("100-%d\n", rupee100);

    c = b - 50;

    if (c < 0)
    {
        rupee50 = 0;
        c = b;
    }
    else
    {
        rupee50 = b;
        rupee50 = (rupee50) / 50;
        v = rupee50 * 50;
        c = b - v;
    }
    printf("50-%d\n", rupee50);

    d = c - 20;

    if (d <= 0)
    {
        rupee20 = 0;
        d = c;
    }
    else
    {
        rupee20 = c;
        rupee20 = (rupee20) / 20;
        v = rupee20 * 20;
        d = c - v;
    }
    printf("20-%d\n", rupee20);

    e = d - 10;

    if (e <= 0)
    {
        rupee10 = 0;
        e = d;
    }
    else
    {
        rupee10 = d;
        rupee10 = (rupee10) / 10;
        v = rupee10 * 10;
        e = d - v;
    }
    printf("10-%d\n", rupee10);

    f = e - 5;

    if (f <= 0)
    {
        rupee5 = 0;
        f = e;
    }
    else
    {
        rupee5 = e;
        rupee5 = (rupee5) / 5;
        v = rupee5 * 5;
        f = e - v;
    }
    printf("5-%d\n", rupee5);

    g = f - 2;

    if (g < 0)
    {
        rupee2 = 0;
        g = f;
    }
    else
    {
        rupee2 = f;
        rupee2 = (rupee2) / 2;
        v = rupee2 * 2;
        g = f - v;
    }
    printf("2-%d\n", rupee2);

    h = g - 1;

    if (h < 0)
    {
        rupee1 = 0;
        h = g;
    }
    else
    { 
        rupee1 = g;
        rupee1 = (rupee1) / 1;
        v = rupee1 * 1;
        h = g - v;
    }
    printf("1-%d\n", rupee1);

    return 0;
}
