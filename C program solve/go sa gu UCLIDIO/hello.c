#include<stdio.h>

int main ()
{
    int x, y, l, s, t;

    printf("Enter two numbers:");
    scanf("%d%d", &x, &y);

    if(x > y){
        l = x;
        s = y;
    }else{
        l = y;
        s = x;
    }

    while(s != 0)
    {
        t = l % s;
        l = s;
        s = t;
    }
    printf("The result is: %d", l);
    return 0;
}