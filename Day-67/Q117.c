// Q117 (Logic Enhancers): Merge two sorted arrays.
#include <stdio.h>

int main(void)
{
    int a[1000], b[1000], m, n, i = 0, j = 0, first = 1;
    if (scanf("%d %d", &m, &n) != 2 || m < 0 || n < 0 || m + n > 2000) return 1;
    for (i = 0; i < m; i++) if (scanf("%d", &a[i]) != 1) return 1;
    for (j = 0; j < n; j++) if (scanf("%d", &b[j]) != 1) return 1;
    i = j = 0;
    while (i < m || j < n) {
        int value;
        if (j == n || (i < m && a[i] <= b[j])) value = a[i++];
        else value = b[j++];
        printf(first ? "%d" : " %d", value); first = 0;
    }
    putchar('\n');
    return 0;
}
