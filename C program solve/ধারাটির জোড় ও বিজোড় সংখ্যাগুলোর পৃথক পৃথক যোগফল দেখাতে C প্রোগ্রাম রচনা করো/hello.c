#include<stdio.h>

int main()
{
    int i, sumEven = 0, sumOdd = 0;
    for(i = 1; i <= 40; i = i + 3)
    {
        if(i % 2 == 0){
            sumEven = sumEven + i;
        }
        else{
            sumOdd = sumOdd + i;
        }
    }
    printf("Even sum: %d\n", sumEven);
    printf("Odd sum: %d\n", sumOdd);
    return 0;
}