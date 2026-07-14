#include<stdio.h>

int main()
{
    int ar[5], i, sum = 1;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i] == 0)
        {
            continue;
        }
        sum = sum * ar[i];
    }
    printf("Product of elements: %d\n", sum);

    return 0;
}