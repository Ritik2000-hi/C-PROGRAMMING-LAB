#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;
    char op;

    do {
        
        printf("\nEnter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        
        printf("Enter operation (+, -, *, /): ");
        scanf(" %c", &op); 

        
        if (op == '+')
            result = num1 + num2;
        else if (op == '-')
            result = num1 - num2;
        else if (op == '*')
            result = num1 * num2;
        else if (op == '/') {
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero!\n");
                result = 0;
            }
        } else {
            printf("Invalid operation!\n");
            result = 0;
        }

        printf("Result = %.2f\n", result);

        
        printf("\nDo you want to continue? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    printf("Goodbye!\n");
    return 0;
}
