// Q85 (Strings): Reverse a string.

#include <stdio.h>

int main(void)
{
    char str[1000];
    int length = 0, i;

    if (fgets(str, sizeof str, stdin) == NULL)
        return 1;

    /* Count characters without including the input newline. */
    while (str[length] != '\0' && str[length] != '\n' &&
           str[length] != '\r')
        length++;

    for (i = length - 1; i >= 0; i--)
        printf("%c", str[i]);

    printf("\n");
    return 0;
}
