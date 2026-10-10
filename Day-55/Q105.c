// Q105 (Logic Enhancers): Print the element appearing strictly more than n/2 times, or -1 if no majority exists.
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

    int candidate = 0, votes = 0, count = 0;
    /* Boyer-Moore voting with a verification pass: O(n). */
    for (i = 0; i < n; i++)
    {
        if (votes == 0)
            candidate = a[i];
        if (a[i] == candidate)
            votes++;
        else
            votes--;
    }
    for (i = 0; i < n; i++)
        if (a[i] == candidate)
            count++;
    if (count > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");
    return 0;
}
