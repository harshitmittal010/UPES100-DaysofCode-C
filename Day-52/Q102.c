// Q102 (Logic Enhancers): Print the first 0-based index of the smallest sorted-array element >= x, or -1 if absent.
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

    int x, low = 0, high = n - 1, mid, answer = -1;
    if (scanf("%d", &x) != 1)
        return 1;
    /* Lower-bound binary search: O(log n). */
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (a[mid] >= x)
        {
            answer = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    printf("%d\n", answer);
    return 0;
}
