// Q71: Read and print a matrix.
#include <stdio.h>
int main() {
    int a[10][10], rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
             scanf("%d", &a[i][j]);
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
             printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
