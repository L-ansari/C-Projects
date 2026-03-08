// Static Arrays in C
#include <stdio.h>

// Print a static 2D array (3x4)
void PrintStatic(int matrix[3][4], int rows, int cols) {
    printf("Static Array:\n");
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

    // Size fixed at compile time
    int staticMatrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    PrintStatic(staticMatrix, rows, cols);

    return 0;
}
