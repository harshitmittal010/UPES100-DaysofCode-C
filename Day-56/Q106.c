// Q106 (Logic Enhancers): Print the nearest greater element to the right of each array element, comma-separated; use -1 if absent and nested loops without a stack.
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

    int j, greater;
    for (i = 0; i < n; i++)
    {
        greater = -1;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                greater = a[j];
                break;
            }
        }
        if (i > 0)
            printf(", ");
        printf("%d", greater);
    }
    printf("\n");
    return 0;
}
