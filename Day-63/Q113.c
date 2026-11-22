// Q113 (Logic Enhancers): Find the kth smallest array element.
#include <stdio.h>

int main(void)
{
    int a[1000], n, k, i, j, x;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (i = 0; i < n; i++) if (scanf("%d", &a[i]) != 1) return 1;
    if (scanf("%d", &k) != 1 || k < 1 || k > n) return 1;
    for (i = 1; i < n; i++) {
        x = a[i]; j = i - 1;
        while (j >= 0 && a[j] > x) { a[j + 1] = a[j]; j--; }
        a[j + 1] = x;
    }
    printf("%d\n", a[k - 1]);
    return 0;
}
