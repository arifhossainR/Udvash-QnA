#include<stdio.h>

int main()
{
    float i, N, sum = 0;
    printf("Enter a number: ");
    scanf("%f", &N);

    for(i=1; i<=N; i++)
    {
        sum = sum + (1 / (i * i));
    }

    printf("The sum is: %f", sum);
    return 0;
}