// Q109 (Logic Enhancers): Print the maximum sum among all subarrays of size k.
#include <stdio.h>

int main(void)
{
    int arr[1000], n, k, i;
    long long window_sum = 0, max_sum;

    /* Input: array size, array elements, then window size k. */
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000)
        return 1;
    for (i = 0; i < n; i++)
        if (scanf("%d", &arr[i]) != 1)
            return 1;
    if (scanf("%d", &k) != 1 || k < 1 || k > n)
        return 1;

    for (i = 0; i < k; i++)
        window_sum += arr[i];
    max_sum = window_sum;

    /* Slide the window one element at a time. */
    for (i = k; i < n; i++)
    {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum)
            max_sum = window_sum;
    }

    printf("%lld\n", max_sum);
    return 0;
}
