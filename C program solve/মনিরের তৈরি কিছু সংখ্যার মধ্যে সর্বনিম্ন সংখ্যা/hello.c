#include<stdio.h>

int main()
{
    int i, ar[7] = {25, 45, 76, 83, 56, 37, 17};
    int min = ar[0];
    for(i=1; i<7; i++)
    {
        if(ar[i] < min)
        {
            min = ar[i];
        }
    }
    printf("Minimum number is %d", min);
    return 0;
}