#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Simple ternary check with bitwise AND
    printf("%d is %s\n", num, (num & 1) ? "Odd" : "Even");

    return 0;
}
