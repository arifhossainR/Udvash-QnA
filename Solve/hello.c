#include <stdio.h>
int main ()
{
    int a = 0, b = 4;
    while(a <= b)
    {
        a = a + 1;
        if(a == 3)
        {
            break;
        }
        printf("FIFA ");
    }
    return 0;
}