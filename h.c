
#include <stdio.h>
#include <string.h>


void reverse(char *s) {
    int i = 0;
    int j = (int)strlen(s) - 1;
    while (i < j) {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        i++;
        j--;
    }
}

int main(void) {
    char str[256];

    printf("Enter a string: ");
    if (!fgets(str, sizeof str, stdin)) return 0;
    str[strcspn(str, "\n")] = '\0'; 

    reverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
