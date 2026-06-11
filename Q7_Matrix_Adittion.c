
/* 
   Q7: Addition of Two 5x5 Matrices */

#include <stdio.h>

#define SIZE 5

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];
    int i, j;

    // Input first matrix
    printf("Enter elements of Matrix A (5x5):\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of Matrix B (5x5):\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix addition: C = A + B
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    printf("\nResultant Matrix C = A + B:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%4d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
