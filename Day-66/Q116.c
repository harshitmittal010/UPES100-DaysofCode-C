// Q116 (Logic Enhancers): Print the indices of two values whose sum is target.
#include <stdio.h>

int main(void)
{
    int a[1000], n, target, i, j;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (i = 0; i < n; i++) if (scanf("%d", &a[i]) != 1) return 1;
    if (scanf("%d", &target) != 1) return 1;
    for (i = 0; i < n; i++) for (j = i + 1; j < n; j++)
        if (a[i] + a[j] == target) { printf("%d %d\n", i, j); return 0; }
    puts("-1 -1");
    return 0;
}
