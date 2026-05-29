#include<stdio.h>

int main()
{
    int i;
    for(i = 10; i <= 15; i += 2)
    {
        if(i > 12)
            printf("%d ", i + 1);
        else
            printf("%d ", i - 1);
    }
    return 0;
}