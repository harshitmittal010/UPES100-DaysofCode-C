// Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main() {
    int a[10][10], sum[10], rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
             scanf("%d", &a[i][j]);
    for (int i = 0; i < rows; i++) {
        sum[i] = 0;
        for (int j = 0; j < cols; j++)
             sum[i] += a[i][j];
    }
    for (int i = 0; i < rows; i++)
        printf("Sum of row %d = %d\n", i + 1, sum[i]);
    return 0;
}
