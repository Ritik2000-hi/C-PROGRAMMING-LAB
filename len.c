#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Rectangle {
    int length;
    int breadth;
};

struct Rectangle inputRectangle(void) {
    struct Rectangle r;
    char buf[64];

    printf("Enter length: ");
    if (!fgets(buf, sizeof buf, stdin)) exit(1);
    sscanf(buf, "%d", &r.length);

    printf("Enter breadth: ");
    if (!fgets(buf, sizeof buf, stdin)) exit(1);
    sscanf(buf, "%d", &r.breadth);

    return r;
}


int area(struct Rectangle r) {
    return r.length * r.breadth;
}

int main(void) {
    struct Rectangle rect = inputRectangle();
    printf("Length = %d, Breadth = %d\n", rect.length, rect.breadth);
    printf("Area = %d\n", area(rect));
    return 0;
}