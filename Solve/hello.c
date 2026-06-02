#include <stdio.h>

int main ()
{
    int a = 5, b = 10, t;
    t = a;
    a = b;
    b = t;
    printf("%d  %d", a, b);
    return 0;
}