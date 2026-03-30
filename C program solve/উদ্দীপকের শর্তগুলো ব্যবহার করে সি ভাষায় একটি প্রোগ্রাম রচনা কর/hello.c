#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n%5==0 && n%7==0){
        printf("Good");
    }
    else if(n%5==0){
        printf("Flower");
    }
    else if(n%7==0){
        printf("River");
    }
    else{
        printf("Try again");
    }
    return 0;
}