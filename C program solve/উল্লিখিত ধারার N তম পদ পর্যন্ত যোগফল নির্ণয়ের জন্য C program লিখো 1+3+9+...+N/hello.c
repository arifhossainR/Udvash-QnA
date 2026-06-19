#include<stdio.h>
#include<math.h>
int main()
{
    int i, N, sum = 0;
    scanf("%d", &N);
    for(i = 0; i < N; i = i + 1)
    {
        sum = sum + pow(3, i);
    }
    printf("Sum = %d", sum);
    return 0;
}