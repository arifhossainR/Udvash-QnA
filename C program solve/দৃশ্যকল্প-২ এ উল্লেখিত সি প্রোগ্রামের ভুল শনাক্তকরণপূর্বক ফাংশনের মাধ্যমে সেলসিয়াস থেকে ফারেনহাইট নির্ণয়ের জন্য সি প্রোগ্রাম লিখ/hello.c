#include<stdio.h>

void celcius_to_fahrenheit(float celsius)
{
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("%f", fahrenheit);
}

int main()
{
    int c;
    float f;
    scanf("%f", &c);
    celcius_to_fahrenheit(c);
    return 0;
}