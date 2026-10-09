// Q103 (Logic Enhancers): Print the leftmost pivot index where left and right sums are equal, or -1 if none exists.
#include <stdio.h>

int main(void)
{
    int a[1000], n, i;
    /* Input: array size, array elements, then any requested target. */
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000)
        return 1;
    for (i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1)
            return 1;

    long long total = 0, left = 0;
    for (i = 0; i < n; i++)
        total += a[i];
    /* A running left sum gives O(n) time. */
    for (i = 0; i < n; i++)
    {
        if (left == total - left - a[i])
        {
            printf("%d\n", i);
            return 0;
        }
        left += a[i];
    }
    printf("-1\n");
    return 0;
}
