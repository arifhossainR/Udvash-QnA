#include <stdio.h>
int main()
{
    int a, b, i, gcd;
    scanf("%d %d", &a, &b);

    for(i=1; i <= a && i <= b; i=i+1)
    {
        if(a%i==0 && b%i==0)
            gcd = i;
    }

    printf("The gcd is: %d\n", gcd);
    return 0;
}