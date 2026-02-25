#include<stdio.h>

int main()
{
    int i, s = 0;
    for(i=4; i<=6; i=i+2)
    {
        s = s + i;
    }
    printf("%d", s);
    return 0;
}