#include <stdio.h>
#include <string.h>

int main(void) {
    char str[256];
    printf("Enter a string: ");
    if (!fgets(str, sizeof str, stdin)) return 0;
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') str[--len] = '\0';

    printf("Reversed string: ");
    for (size_t i = len; i-- > 0; ) putchar(str[i]);
    putchar('\n');

    return 0;
}