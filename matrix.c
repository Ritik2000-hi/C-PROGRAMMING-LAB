#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns of Matrix 1: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix 2: ");
    scanf("%d %d", &r2, &c2);


    if (c1 != r2) {
        printf("Multiplication not possible!\n");
        return 0;
    }

    int A[10][10], B[10][10], result[10][10];

  
    printf("\nEnter elements of Matrix 1:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    printf("\nEnter elements of Matrix 2:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }


    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

  
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
