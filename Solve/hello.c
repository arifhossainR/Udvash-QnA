#include <stdio.h>

int main() {
    int i, sum = 0, arr[4] = {12, 13, 14, 15};
    float avg;
    for(i = 0; i < 4; i++) {
        sum = sum + arr[i];
    }
    avg = sum / 4;
    printf("Average: %f\n", avg);
    return 0;
}