// Q108 (Logic Enhancers): Print the product of all array elements except the current element in O(n) time without division.
#include <stdio.h>

int main(void)
{
    int nums[1000], n, i;
    long long answer[1000], prefix = 1, suffix = 1;

    /* Input: array size, followed by its elements. */
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000)
        return 1;
    for (i = 0; i < n; i++)
        if (scanf("%d", &nums[i]) != 1)
            return 1;

    /* Store the product of all elements to the left of each index. */
    for (i = 0; i < n; i++)
    {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    /* Multiply by the product of all elements to the right. */
    for (i = n - 1; i >= 0; i--)
    {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    for (i = 0; i < n; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%lld", answer[i]);
    }
    printf("\n");
    return 0;
}
