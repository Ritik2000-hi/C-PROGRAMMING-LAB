#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;


Complex readComplex(const char *label) {
    Complex c;
    printf("%s (enter real and imaginary parts separated by space): ", label);
    scanf("%f %f", &c.real, &c.imag);
    return c;
}

void printComplex(Complex c) {
    if (c.imag < 0)
        printf("%.2f - %.2fi", c.real, -c.imag);
    else
        printf("%.2f + %.2fi", c.real, c.imag);
}

Complex addComplex(Complex a, Complex b) {
    Complex r;
    r.real = a.real + b.real;
    r.imag = a.imag + b.imag;
    return r;
}

Complex subComplex(Complex a, Complex b) {
    Complex r;
    r.real = a.real - b.real;
    r.imag = a.imag - b.imag;
    return r;
}

int main(void) {
    Complex c1 = readComplex("Enter first complex number");
    Complex c2 = readComplex("Enter second complex number");

    printf("\nYou entered:\nFirst:  ");
    printComplex(c1);
    printf("\nSecond: ");
    printComplex(c2);

    Complex sum = addComplex(c1, c2);
    Complex diff = subComplex(c1, c2);

    printf("\n\nSum:        ");
    printComplex(sum);
    printf("\nDifference: ");
    printComplex(diff);
    printf("\n");

    return 0;
}