#include<stdio.h>
int main()
{
    int P, Q, T;
    scanf("%d %d", &P, &Q);
    T = P;
    P = Q;
    Q = T;
    printf("%d %d", P, Q);
    return 0;
}