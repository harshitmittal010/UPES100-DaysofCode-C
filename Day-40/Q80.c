// Q80: Multiply two matrices.
#include <stdio.h>

int main(void)
{
    int a[10][10], b[10][10], r1, c1, r2, c2;
    long long product[10][10] = {0};
    printf("Enter rows and columns of first matrix (1-10): ");
    if (scanf("%d %d", &r1, &c1) != 2 ||
        r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10)
        return 1;
    printf("Enter rows and columns of second matrix (1-10): ");
    if (scanf("%d %d", &r2, &c2) != 2 ||
        r2 < 1 || r2 > 10 || c2 < 1 || c2 > 10)
        return 1;
    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible\n");
        return 0;
    }

    printf("Enter first matrix:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            if (scanf("%d", &a[i][j]) != 1)
                return 1;
    printf("Enter second matrix:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            if (scanf("%d", &b[i][j]) != 1)
                return 1;

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                product[i][j] += (long long)a[i][k] * b[k][j];

    printf("Product of matrices:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
            printf("%lld ", product[i][j]);
        printf("\n");
    }
    return 0;
}
