#include <stdio.h>

int main () {
    int x, y, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    if (x > y) {
        max = x;
    } else {
        max = y;
    }

    while (1) {
        if (max % x == 0 && max % y == 0) {
            lcm = max;
            break;
        }
        max++;
    }
    printf("The lcm is: %d\n", lcm);
    return 0;
}