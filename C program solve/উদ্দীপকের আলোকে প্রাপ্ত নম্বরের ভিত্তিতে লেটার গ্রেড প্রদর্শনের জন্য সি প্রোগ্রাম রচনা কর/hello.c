#include<stdio.h>

int main()
{
    int mark;
    printf("Enter a number: ");
    scanf("%d", &mark);

    if(mark >= 70 && mark <= 100)
    {
        printf("A.");
    }
    else if(mark >= 60 && mark <= 69)
    {
        printf("B.");
    }
    else if(mark >= 50 && mark <= 59)
    {
        printf("C.");
    }
    else if(mark >= 33 && mark <= 49)
    {
        printf("D.");
    }
    else if(mark >= 0 && mark <= 32)
    {
        printf("F.");
    }
    else{
        printf("Invalid marks.");
    }
    return 0;
}