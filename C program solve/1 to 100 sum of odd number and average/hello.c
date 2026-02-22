#include<stdio.h>

int main()
{
    int i, sum = 0;
    float avg;
    for(i = 1; i <= 100; i++)
    {
        if(i % 2 == 1)
        {
            sum = sum + i;
        }
    }
    avg = sum / 50.0;
    printf("Sum is %d\n", sum);
    printf("Average  is %f\n", avg);
    return 0;
}