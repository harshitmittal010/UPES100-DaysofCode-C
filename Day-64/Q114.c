// Q114 (Logic Enhancers): Length of the longest substring without repeated characters.
#include <stdio.h>

int main(void)
{
    char s[100005];
    int last[256], i, start = 0, best = 0;
    for (i = 0; i < 256; i++) last[i] = -1;
    if (scanf("%100000s", s) != 1) return 1;
    for (i = 0; s[i]; i++) {
        unsigned char c = (unsigned char)s[i];
        if (last[c] >= start) start = last[c] + 1;
        last[c] = i;
        if (i - start + 1 > best) best = i - start + 1;
    }
    printf("%d\n", best);
    return 0;
}
