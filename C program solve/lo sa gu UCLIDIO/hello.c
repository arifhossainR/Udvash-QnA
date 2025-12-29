#include<stdio.h>

int main ()
{
    int n1, n2, l, s, t, gcd, lcm;

    printf("Enter two numbers:");
    scanf("%d%d", &n1, &n2);

    if(n1 > n2){
        l = n1;
        s = n2;
    }else{
        l = n2;
        s = n1;
    }

    while(s != 0)
    {
        t = l % s;
        l = s;
        s = t;
    }
    gcd = l;
    lcm = (n1 * n2) / gcd;
    printf("LCM is: %d", lcm);
    return 0;
}