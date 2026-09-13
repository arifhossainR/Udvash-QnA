#include<stdio.h>

int main()
{
    int i, N, sum = 0;
    scanf("%d", &N);
    for(i = 1; i <= N; i = i + 2)
    {
        sum = sum + i * i;
    }
    printf("Sum is: %d.", sum);
    return 0;
}