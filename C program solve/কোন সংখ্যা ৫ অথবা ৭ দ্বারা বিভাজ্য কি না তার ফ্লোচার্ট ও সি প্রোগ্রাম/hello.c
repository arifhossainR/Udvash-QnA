#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n % 5 == 0 && n % 7 == 0)
    {
        printf("divisible by both.");
    }
    else if(n % 5 == 0)
    {
        printf("divisible by 5.");
    }
    else if(n % 7 == 0)
    {
        printf("divisible by 7.");
    }
    else
    {
        printf("not divisible.");
    }
    return 0;
}