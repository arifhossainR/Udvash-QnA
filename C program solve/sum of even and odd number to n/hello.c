#include<stdio.h>

int main()
{
    int i, n, even_sum = 0, odd_sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0){
            even_sum = even_sum + i;
        }
        else{
            odd_sum = odd_sum + i;
    }
    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);
    return 0;
}