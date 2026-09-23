// Q90 (Strings): Toggle case of each character in a string.
#include <stdio.h>

int main(void)
{
    char str[1000];
    int i;

    if (fgets(str, sizeof str, stdin) == NULL)
        return 1;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n' || str[i] == '\r')
        {
            str[i] = '\0';
            break;
        }

        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + ('a' - 'A');
    }

    printf("%s\n", str);
    return 0;
}
