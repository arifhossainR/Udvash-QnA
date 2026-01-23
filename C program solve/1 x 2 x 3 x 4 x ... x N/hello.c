#include<stdio.h>
int main()
{
    int i, n, M = 1;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        M = M * i;
    }
    printf("The multiplication is: %d.", M);
    return 0;
}