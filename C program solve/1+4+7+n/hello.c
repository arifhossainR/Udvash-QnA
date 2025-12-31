#include<stdio.h>

int main()
{
    int n, i, sumeven = 0, sumodd = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i = i + 3)
    {
        if(i % 2 == 0){
            sumeven = sumeven + i;
        }
        else{
            sumodd = sumodd + i;
        }
    }
    printf("Sum of even numbers = %d\n", sumeven);
    printf("Sum of odd numbers = %d\n", sumodd);
    return 0;
}