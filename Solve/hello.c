#include <stdio.h>

int main() {
    int n, i = 1;
    float sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + (float)(i * i) / ((i + 2) * (i + 2) * (i + 2));
        i++;
    }

    printf("Sum = %f\n", sum);
    return 0;
}