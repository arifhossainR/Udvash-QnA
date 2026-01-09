#include<stdio.h>

void main()
{
    float s = 0, n, i = 1;
    printf("Enter the number: ");
    scanf("%f", &n);
    while (i <= n)
    {
        s = s + (1 / pow(2, i));
        i = i + 1;
    }
    printf("%f", s);
}