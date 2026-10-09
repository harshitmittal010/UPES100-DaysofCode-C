// Q101 (Logic Enhancers): Print the first and last 0-based indices of a target in a sorted array, or -1, -1 if absent.
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

    int target, low = 0, high = n - 1, mid, first = -1, last = -1;
    if (scanf("%d", &target) != 1)
        return 1;
    /* Two binary searches: O(log n) search time. */
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (a[mid] >= target)
        {
            if (a[mid] == target)
                first = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (a[mid] <= target)
        {
            if (a[mid] == target)
                last = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    printf("%d, %d\n", first, last);
    return 0;
}
