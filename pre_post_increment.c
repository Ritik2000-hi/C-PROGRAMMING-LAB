#include <stdio.h>

int main() {
    int x = 5;

    printf("Initial value of x = %d\n", x);

    // Post-increment
    printf("Using x++ (post-increment): %d\n", x++);
    printf("Value of x after x++ = %d\n", x);

    // Pre-increment
    printf("Using ++x (pre-increment): %d\n", ++x);
    printf("Value of x after ++x = %d\n", x);

    return 0;
}