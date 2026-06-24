#include<stdio.h>

int main()
{
    int number[6] = {7, 10, 45, 20, 51, 23};
    int i, sum = 0;
    float avg;
    for(i = 0; i < 6; i++)
    {
        sum = sum + number[i];
    }
    avg = (float)sum / 6;
    printf("Average: %f", avg);
    return 0;
}