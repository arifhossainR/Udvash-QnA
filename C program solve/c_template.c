/*
 * c_template.c
 * Minimal C program template with common utilities.
 *
 * Compile (GCC/MinGW):
 *   gcc -O2 -std=c11 -Wall -Wextra -o c_template c_template.c
 * Compile (MSVC):
 *   cl /O2 /W4 c_template.c
 * Run:
 *   ./c_template   (or c_template.exe on Windows)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

/* Helpful macros */
#define UNUSED(x) (void)(x)
#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))

/* Simple, portable integer reader (stdin). Not the fastest, but portable. */
static inline int read_int(void) {
    int x = 0, sign = 1, c = getchar();
    while (c != '-' && (c < '0' || c > '9') && c != EOF) c = getchar();
    if (c == '-') { sign = -1; c = getchar(); }
    while (c >= '0' && c <= '9') { x = x * 10 + (c - '0'); c = getchar(); }
    return x * sign;
}

int main(int argc, char **argv) {
    UNUSED(argc); UNUSED(argv);

    /* Example: read two integers and print sum */
    printf("Enter two integers separated by space: \n");
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) {
        fprintf(stderr, "Invalid input\n");
        return EXIT_FAILURE;
    }
    printf("Sum: %d\n", a + b);
    return EXIT_SUCCESS;
}
