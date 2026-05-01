#include <stdio.h>

int main()
{
    int n, a, b, add;
    scanf("%d", &n);
    a = 1;
    b = 1;
    printf("%d %d ", a, b);
    while(b <= n)
    {
        add = a + b;
        printf("%d ", add);
        a = b;
        b = add;
    }
    return 0;
}