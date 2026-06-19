#include <stdio.h>
int main()
{
    int a, b, i, gcd;
    i = 1;
    scanf("%d %d", &a, &b);
    do{
        if(a%i == 0 && b%i == 0)
            gcd = i;
        i = i + 1;
    }
    while (i <= a && i <= b);
    printf("The gcd is: %d\n", gcd);
    return 0;
}