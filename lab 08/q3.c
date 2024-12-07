#include <stdio.h>

#define SIZE 3

int main() {
    int matrix[SIZE][SIZE];
    int i, j, k;
    
  
    printf("Enter the elements of a 3x3 matrix:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    

    for (i = 0; i < SIZE; i++) {
        int min_row = matrix[i][0];
        int col_index = 0;
        
        
        for (j = 1; j < SIZE; j++) {
            if (matrix[i][j] < min_row) {
                min_row = matrix[i][j];
                col_index = j;
            }
        }
        
        
        int is_saddle_point = 1;
        for (k = 0; k < SIZE; k++) {
            if (matrix[k][col_index] > min_row) {
                is_saddle_point = 0;
                break;
            }
        }
        
       
        if (is_saddle_point) {
            printf("Saddle Point found at (%d, %d): %d\n", i, col_index, min_row);
        }
    }
    
    return 0;
}
