#include <stdio.h>
int main() {
    int C;
    float F;
    scanf("%d", &C);
    if (C >= 0) {
        F = 9/5.0 * C + 32;
        printf("%f", F);
    }
    else {
        printf("Invalid input.");
    }
    return 0;
}