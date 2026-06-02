#include<stdio.h>
int main ()
{
    int x, y, l, s, t, gcd, lcm;
    x = 45;
    y = 36;
    
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
    gcd = l;
    lcm = (x * y) / gcd;
    printf("The gcd is: %d\n", gcd);
    printf("The lcm is: %d", lcm);
    return 0;
}