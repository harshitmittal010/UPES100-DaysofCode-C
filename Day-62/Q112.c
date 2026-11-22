// Q112 (Logic Enhancers): Find the maximum contiguous subarray sum (Kadane's algorithm).
#include <stdio.h>

int main(void)
{
    int n, i, value;
    long long current, best;
    if (scanf("%d", &n) != 1 || n < 1 || n > 100000) return 1;
    if (scanf("%d", &value) != 1) return 1;
    current = best = value;
    for (i = 1; i < n; i++) {
        if (scanf("%d", &value) != 1) return 1;
        current = current > 0 ? current + value : value;
        if (current > best) best = current;
    }
    printf("%lld\n", best);
    return 0;
}
