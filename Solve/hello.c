#include <stdio.h>

int main () {
    double C, F;
    printf("Enter a temperature in Celsius: ");
    scanf("%lf", &C);
    if (C < 0)
    {
        printf("Temperature cannot be negative.\n");
    }
    else
    {
        F = (9.0 / 5.0) * C + 32.0;
        printf("Temperature in Fahrenheit: %f\n", F);
    }
    
    return 0;
}