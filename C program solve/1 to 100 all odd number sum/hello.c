#include<stdio.h>

int main()
{
    int i, sum = 0;
    for(i = 1; i <= 100; i++)
    {
        if(i % 2 == 1) {
            sum = sum + i*i;
        }
    }
    printf("The sum of square of all odd numbers from 1 to 100 = %d\n", sum);
    return 0;
}