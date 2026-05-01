#include<stdio.h>

int main()
{
    int a, b, add, sumOdd = 1, sumEven = 0;
    a = 0;
    b = 1;
    do{
        add = a + b;
        if(add % 2 == 0){
            sumEven = sumEven + add;
        }else{
            sumOdd = sumOdd + add;
        }
        a = b;
        b = add;
    }while(add < 55);

    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);
    return 0;
}