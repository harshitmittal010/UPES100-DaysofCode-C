// Q91 (Strings): Remove all vowels from a string.
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000], ch;
    int i, j = 0;

    if (fgets(str, sizeof str, stdin) == NULL)
        return 1;
    str[strcspn(str, "\r\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')
            str[j++] = ch;
    }
    str[j] = '\0';
    printf("%s\n", str);
    return 0;
}
