#include<stdio.h>
void main()
{
    int a, b, c, d;
    a=7;
    b= a++;
    c= ++a;
    d= a--;
    printf ("%d %d %d %d", a, b, c, d);
}