#include <stdio.h>
int main ()
{ double a,b;
  double result; 
  char op;
    printf("Enter 1st number: ");
      scanf("%lf",&a);
    printf("Enter 2nd number : ");
  
    scanf("%lf",&b);
    printf("Enter operator +,-,/,*:");
    scanf(" %c", &op);
    
    switch (op) {
        case '+':
            result = a + b;
            printf("Result: %.2lf\n", result);
            break;

        case '-':
            result = a - b;
            printf("Result: %.2lf\n", result);
            break;

        case '*':
            result = a* b;
            printf("Result: %.2lf\n", result);
            break;

        case '/':
            if (b != 0) {
                result = a/ b;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero.\n");
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
    }

     
    return 0;
}