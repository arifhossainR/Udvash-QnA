#include <stdio.h>

int main() {
    int i, n, sum = 0;
    scanf("%d", &n);
    i = 10;

start:
    if(i <= n){
        sum = sum + i;
        i = i + 6;
        goto start;
    }
    printf("%d", sum);
    return 0;
}