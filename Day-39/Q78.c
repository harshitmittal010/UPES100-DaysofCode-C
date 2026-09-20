// Q78: Find the sum of main diagonal elements of a square matrix.
#include <stdio.h>

int main(void)
{
    int a[10][10], n;
    printf("Enter size of square matrix (1-10): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10)
        return 1;
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (scanf("%d", &a[i][j]) != 1)
                return 1;

    long long sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i][i];
    printf("Sum of main diagonal = %lld\n", sum);
    return 0;
}
