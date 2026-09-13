#include <stdio.h>

int main()
{
    int ar[5];
    int i, m = 1;
    for(i=0; i<5; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i] == 0)
        {
            continue;
        }
        m = m * ar[i];
    }
    printf("Multiplication is: %d", m);
    return 0;
}