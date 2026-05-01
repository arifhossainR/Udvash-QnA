#include<stdio.h>

int main()
{
    int i, esum = 0, osum = 0;
    for(i = 1; i <= 100; i=i+1)
    {
        if(i % 2 == 0)
        {
            esum = esum + i;
        }
        else
        {
            osum = osum + i;
        }
    }
    printf("Even sum is %d\n", esum);
    printf("Odd sum is %d\n", osum);
    return 0;
}