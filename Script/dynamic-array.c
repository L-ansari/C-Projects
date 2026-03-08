// Dynamic Arrays in C
#include <stdio.h>
#include <stdlib.h>

// Print a dynamic 2D array
void PrintDynamic(int **matrix, int rows, int cols) {
    printf("Dynamic Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int rows = 3, cols = 4;

    // Step 1: allocate row pointers
    int **dynamicMatrix = malloc(rows * sizeof(int *));

    // Step 2: allocate each row
    for (int i = 0; i < rows; i++) {
        dynamicMatrix[i] = malloc(cols * sizeof(int));
    }

    // Fill with values
    int value = 10;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            dynamicMatrix[i][j] = value;
            value += 10;
        }
    }
    PrintDynamic(dynamicMatrix, rows, cols);

    // Step 3: free memory (rows first, then the pointer array)
    for (int i = 0; i < rows; i++) {
        free(dynamicMatrix[i]);   // free each row
    }
    free(dynamicMatrix);          // free the row pointers

    printf("Dynamic memory freed successfully!\n");
    return 0;
}
