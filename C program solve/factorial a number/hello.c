#include <stdio.h>

int i, n, mul = 1;
int factorial(int n)
{
    for(i=1; i<=n; i++)
    {
        mul = mul * i;
    }
    printf("%d", mul);
}

int main ()
{
    printf("Enter a number: ");
    scanf("%d", &n);

    factorial(n);
    
    return 0;
}