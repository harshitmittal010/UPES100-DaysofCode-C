// Q79: Perform alternating zigzag diagonal traversal of a matrix.
// Example: 1 2 3 / 4 5 6 / 7 8 9 gives 1 2 4 7 5 3 6 8 9.
#include <stdio.h>

int main(void)
{
    int a[10][10], rows, cols;
    printf("Enter rows and columns (1-10): ");
    if (scanf("%d %d", &rows, &cols) != 2 ||
        rows < 1 || rows > 10 || cols < 1 || cols > 10)
        return 1;
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (scanf("%d", &a[i][j]) != 1)
                return 1;

    printf("Diagonal traversal: ");
    for (int diagonal = 0; diagonal < rows + cols - 1; diagonal++)
    {
        int firstRow = (diagonal < cols) ? 0 : diagonal - cols + 1;
        int lastRow = (diagonal < rows) ? diagonal : rows - 1;
        if (diagonal % 2 == 0)
        {
            for (int i = lastRow; i >= firstRow; i--)
                printf("%d ", a[i][diagonal - i]);
        }
        else
        {
            for (int i = firstRow; i <= lastRow; i++)
                printf("%d ", a[i][diagonal - i]);
        }
    }
    printf("\n");
    return 0;
}
