// Q92 (Strings): Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main(void)
{
    char str[1000];
    int count[26] = {0}, i;

    if (fgets(str, sizeof str, stdin) == NULL)
        return 1;

    for (i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            count[str[i] - 'a']++;

    /* Choose the leftmost lowercase letter that occurs more than once. */
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' && count[str[i] - 'a'] > 1)
        {
            printf("%c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating lowercase alphabet\n");
    return 0;
}
