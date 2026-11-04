// Q110 (Logic Enhancers): Print the maximum element in every subarray of size k.
#include <stdio.h>

int main(void)
{
    int arr[1000], deque[1000], n, k, i;
    int front = 0, back = 0;

    /* Input: array size, array elements, then window size k. */
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000)
        return 1;
    for (i = 0; i < n; i++)
        if (scanf("%d", &arr[i]) != 1)
            return 1;
    if (scanf("%d", &k) != 1 || k < 1 || k > n)
        return 1;

    for (i = 0; i < n; i++)
    {
        /* Remove indices that have moved outside the current window. */
        while (front < back && deque[front] <= i - k)
            front++;

        /* Keep deque values in decreasing order. */
        while (front < back && arr[deque[back - 1]] <= arr[i])
            back--;
        deque[back++] = i;

        if (i >= k - 1)
        {
            if (i >= k)
                printf(" ");
            printf("%d", arr[deque[front]]);
        }
    }

    printf("\n");
    return 0;
}
