// Q118 (Logic Enhancers): Find the missing value from 0 through n.
#include <stdio.h>

int main(void)
{
    int n, i, value;
    long long missing;
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000000) return 1;
    missing = (long long)n * (n + 1) / 2;
    for (i = 0; i < n; i++) { if (scanf("%d", &value) != 1) return 1; missing -= value; }
    printf("%lld\n", missing);
    return 0;
}
