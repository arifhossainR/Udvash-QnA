#include <stdio.h>

int main() {
    int i = 10;

start:
    if(i <= 100){
        printf("%d ", i);
        i = i + 10;
        goto start;
    }
    return 0;
}