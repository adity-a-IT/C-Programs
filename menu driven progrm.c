/*Write a mmenu driven program to add ,subtract ,multiply, transpose of a matrix*/

/*Write a menu driven program to add, subtract, multiply, transpose of a matrix*/

#include <stdio.h>

int main(void) {
    int a[2][3], b[2][3], c[2][3];
    int i, j, n;

    printf("------------------MENU-----------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Transpose\n");
    printf("----------------------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("Enter elements of matrix A (2x3):\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 3; j++) {
                    scanf("%d", &a[i][j]);
                }
            }
            printf("Enter elements of matrix B (2x3):\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 3; j++) {
                    scanf("%d", &b[i][j]);
                }
            }
            printf("Addition of matrices:\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 3; j++) {
                    c[i][j] = a[i][j] + b[i][j];
                    printf("%d\t", c[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:
            printf("Enter elements of matrix A (2x3):\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 3; j++) {
                    scanf("%d", &a[i][j]);
                }
            }
            printf("Enter elements of matrix B (2x3):\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 3; j++) {
                    scanf("%d", &b[i][j]);
                }
            }
            printf("Subtraction of matrices (A - B):\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 3; j++) {
                    c[i][j] = a[i][j] - b[i][j];
                    printf("%d\t", c[i][j]);
                }
                printf("\n");
            }
            break;

        case 3:
            printf("Matrix multiplication (2x3 * 3x2 = 2x2):\n");
            printf("Enter elements of matrix A (2x3):\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 3; j++) {
                    scanf("%d", &a[i][j]);
                }
            }
            printf("Enter elements of matrix B (3x2):\n");
            int b32[3][2];
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 2; j++) {
                    scanf("%d", &b32[i][j]);
                }
            }
            printf("Product (A x B):\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    c[i][j] = 0;
                    for (int k = 0; k < 3; k++) {
                        c[i][j] += a[i][k] * b32[k][j];
                    }
                    printf("%d\t", c[i][j]);
                }
                printf("\n");
            }
            break;

        case 4:
            printf("Enter elements of matrix (2x3):\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 3; j++) {
                    scanf("%d", &a[i][j]);
                }
            }
            printf("Transpose of the matrix (3x2):\n");
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 2; j++) {
                    printf("%d\t", a[j][i]);
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
            return 1;
    }

    return 0;
}