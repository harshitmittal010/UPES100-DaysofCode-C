// Q74: Find the transpose of a matrix.
#include <stdio.h>
int main() {
    int a[10][10], rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);




    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);
    printf("Transpose:\n");
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
