#include <stdio.h>

int main () {
    int a = 3, b = 9, c = 1214, lcm, counter = 1;

    while (1) {
        if (counter % a == 0 && counter % b == 0 && counter % c == 0) {
            lcm = counter;
            break;
        }
        counter++;
    }
    printf("The lcm is: %d\n", lcm);
    return 0;
}