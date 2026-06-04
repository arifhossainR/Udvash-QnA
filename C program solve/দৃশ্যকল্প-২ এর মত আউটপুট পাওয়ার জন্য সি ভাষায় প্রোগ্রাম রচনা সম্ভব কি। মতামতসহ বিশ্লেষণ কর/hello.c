#include <stdio.h>
int main ()
{
    int i, n, s = 0;
    printf("Enter the Last Number of the series: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        s = s + i;
    }
    printf("Sum of the series: %d.", s);
    return 0;
}