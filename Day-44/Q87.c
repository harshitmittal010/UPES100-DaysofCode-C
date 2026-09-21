// Q87 (Strings): Count spaces, digits and special characters in a string.
#include <stdio.h>

int main(void)
{
    char str[1000];
    int i, spaces = 0, digits = 0, special = 0;

    if (fgets(str, sizeof str, stdin) == NULL)
        return 1;

    for (i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++)
    {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (!((str[i] >= 'A' && str[i] <= 'Z') ||
                   (str[i] >= 'a' && str[i] <= 'z')))
            special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
