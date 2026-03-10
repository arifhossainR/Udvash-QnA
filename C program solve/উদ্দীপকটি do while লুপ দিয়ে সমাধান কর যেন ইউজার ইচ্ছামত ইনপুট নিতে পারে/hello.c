#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    do{
        if (x % 3 == 0)
        {
            x += 5;
            continue;
        }
        printf("%d\t", x);
        x += 5;
    }while (x < 50);

    return 0;
}