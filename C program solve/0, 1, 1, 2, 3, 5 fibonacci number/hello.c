#include <stdio.h>

int main()
{
    int a, b, add, sum = 1;
    a = 0;
    b = 1;
    while(b < 55)
    {
        add = a + b;
        sum = sum + add;
        a = b;
        b = add;
    }
    printf("%d", sum);
    return 0;
}