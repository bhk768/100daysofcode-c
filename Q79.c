#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

 
    for (int k = 0; k < rows + cols - 1; k++) {
        int startRow = (k < cols) ? 0 : k - cols + 1;
        int startCol = (k < cols) ? k : cols - 1;

    
        int i = startRow, j = startCol;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
