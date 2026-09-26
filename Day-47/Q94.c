// Q94 (Strings): Find the longest word in a sentence.
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[1000];
    int i = 0, start, length, longestStart = 0, longestLength = 0;

    if (fgets(str, sizeof str, stdin) == NULL)
        return 1;

    /* Words are separated by whitespace; ties keep the first word. */
    while (str[i] != '\0')
    {
        while (str[i] != '\0' && isspace((unsigned char)str[i]))
            i++;
        start = i;
        while (str[i] != '\0' && !isspace((unsigned char)str[i]))
            i++;
        length = i - start;
        if (length > longestLength)
        {
            longestLength = length;
            longestStart = start;
        }
    }

    for (i = longestStart; i < longestStart + longestLength; i++)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}
