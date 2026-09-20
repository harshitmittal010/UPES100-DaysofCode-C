// Q77: Check whether the main diagonal elements of a matrix are distinct.
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

    int distinct = 1;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i][i] == a[j][j])
                distinct = 0;

    if (distinct)
        printf("Diagonal elements are distinct\n");
    else
        printf("Diagonal elements are not distinct\n");
    return 0;
}
