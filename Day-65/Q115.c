// Q115 (Logic Enhancers): Check whether two lowercase strings are anagrams.
#include <stdio.h>

int main(void)
{
    char s[100005], t[100005];
    int count[26] = {0}, i;
    if (scanf("%100000s %100000s", s, t) != 2) return 1;
    for (i = 0; s[i]; i++) count[s[i] - 'a']++;
    for (i = 0; t[i]; i++) count[t[i] - 'a']--;
    for (i = 0; i < 26; i++) if (count[i]) { puts("Not Anagram"); return 0; }
    puts("Anagram");
    return 0;
}
