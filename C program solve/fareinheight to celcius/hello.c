#include<stdio.h>

int main()
{
    int F;
    float C;
    scanf("%d", &F);
    C = (F - 32) * 5.0 / 9.0;
    printf("%f", C);
    return 0;
}