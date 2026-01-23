#include <stdio.h>

float celsius_to_fahrenheit(float c)
{
    return (9 * c) / 5 + 32;
}

int main()
{
    float c, f;
    scanf("%f", &c);
    f = celsius_to_fahrenheit(c);
    printf("%f", f);
    return 0;
}