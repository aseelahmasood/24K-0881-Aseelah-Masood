#include <stdio.h>
#include <stdlib.h>

void multiplyMatrices(int **mat1, int **mat2, int **result, int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int m, n, p;

    printf("Enter the number of rows and columns for the first matrix (m x n): ");
    scanf("%d %d", &m, &n);
    printf("Enter the number of columns for the second matrix (n x p): ");
    scanf("%d", &p);

    int **mat1 = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        mat1[i] = (int *)malloc(n * sizeof(int));
    }

    int **mat2 = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        mat2[i] = (int *)malloc(p * sizeof(int));
    }

    int **result = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        result[i] = (int *)malloc(p * sizeof(int));
    }

    printf("\nEnter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter the elements of the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    multiplyMatrices(mat1, mat2, result, m, n, p);

    printf("\nThe resulting matrix is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++) free(mat1[i]);
    free(mat1);
    for (int i = 0; i < n; i++) free(mat2[i]);
    free(mat2);
    for (int i = 0; i < m; i++) free(result[i]);
    free(result);

    return 0;
}
