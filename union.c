#include <stdio.h>
#include <string.h>
#include <ctype.h>

union Data {
    int i;
    float f;
    char str[20];
};

void printData(union Data d) {
    printf("  i   = %d\n", d.i);
    printf("  f   = %f\n", d.f);

    
    printf("  str = \"");
    for (size_t k = 0; k < sizeof d.str; ++k) {
        unsigned char ch = (unsigned char)d.str[k];
        if (ch == '\0') { break; }
        if (isprint(ch)) putchar(ch);
        else printf("\\x%02x", ch);
    }
    printf("\"\n");
}

int main(void) {
    union Data data;

    data.i = 10;
    printf("After assigning data.i = 10:\n");
    printData(data);
    printf("\n");

    data.f = 220.5f;
    printf("After assigning data.f = 220.5:\n");
    printData(data);
    printf("\n");

    
    strncpy(data.str, "Hello union", sizeof data.str - 1);
    data.str[sizeof data.str - 1] = '\0';
    printf("After assigning data.str = \"Hello union\":\n");
    printData(data);
    printf("\n");

    return 0;
}