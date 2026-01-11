#include<stdio.h>

int main()
{
    int a=4, b=2, c=5, d=3;
    int result = a+(a*b-(c%d)/2)*3*(c-d+(a-b));
    printf("%d\n", result);
    return 0;
}