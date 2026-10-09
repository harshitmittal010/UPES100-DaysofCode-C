// Q100 (Strings): Print all non-empty substrings of a string.
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000];
    int i, j, k, length;
    if (fgets(str, sizeof str, stdin) == NULL)
        return 1;
    str[strcspn(str, "\r\n")] = '\0';
    length = (int)strlen(str);

    for (i = 0; i < length; i++)
        for (j = i; j < length; j++)
        {
            for (k = i; k <= j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    return 0;
}
