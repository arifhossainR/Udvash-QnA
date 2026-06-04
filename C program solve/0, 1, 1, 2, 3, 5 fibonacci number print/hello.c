#include <stdio.h>

int main()
{
    int a, b, add, n;
    printf("Input the value of n: ");
    scanf("%d", &n);
    a = 0;
    b = 1;
    printf("The Fibonacci series is\n %d %d ", a, b);
    while(n != 2)
    {
        add = a + b;
        printf("%d ", add);
        a = b;
        b = add;
        n--;
    }
    return 0;
}