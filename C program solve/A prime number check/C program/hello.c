#include<stdio.h>
int main()
{
    int num, i, status = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i < num; i++){
        if(num%i == 0){
            status = 1;
            break;
        }
    }

    if(status == 1){
        printf("%d is not a prime number.", num);
    }
    else{
        printf("%d is a prime number.", num);
    }

    return 0;
}