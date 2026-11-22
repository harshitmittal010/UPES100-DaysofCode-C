// Q119 (Logic Enhancers): Find the repeated element in one pass.
#include <stdio.h>

int main(void)
{
    int n, i, value, duplicate = 0;
    unsigned char seen[1000001] = {0};
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000000) return 1;
    for (i = 0; i < n; i++) {
        if (scanf("%d", &value) != 1 || value < 0 || value > 1000000) return 1;
        if (seen[value]) duplicate = value;
        else seen[value] = 1;
    }
    printf("%d\n", duplicate);
    return 0;
}
