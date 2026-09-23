// Q89 (Strings): Count frequency of a given character in a string.
#include <stdio.h>

int main(void)
{
    char str[1000], ch;
    int i, count = 0;

    /* Enter the string on the first line and the character on the next. */
    if (fgets(str, sizeof str, stdin) == NULL)
        return 1;
    if (scanf("%c", &ch) != 1)
        return 1;

    for (i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++)
    {
        if (str[i] == ch)
            count++;
    }

    printf("Frequency = %d\n", count);
    return 0;
}
