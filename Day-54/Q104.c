// Q104 (Logic Enhancers): Find x such that the inclusive sums from 1 to x and x to n are equal; print -1 if absent.
#include <stdio.h>
#include <limits.h>

int main(void)
{
    long long n, total, low, high, mid;
    /* Accept positive n up to INT_MAX so n * (n + 1) fits in long long. */
    if (scanf("%lld", &n) != 1 || n < 1 || n > INT_MAX)
        return 1;
    total = n * (n + 1) / 2;
    low = 1;
    high = n;
    /* The equation simplifies to x*x = n*(n+1)/2; use O(log n) search. */
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (mid * mid == total)
        {
            printf("%lld\n", mid);
            return 0;
        }
        if (mid * mid < total)
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf("-1\n");
    return 0;
}
