// Q84: Convert lowercase to uppercase without built-in conversion functions.
#include <stdio.h>

int main(void)
{
    char str[1000];
    printf("Enter a string: ");
    if (fgets(str, sizeof str, stdin) == NULL)
        return 1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }
    printf("Uppercase string: %s\n", str);
    return 0;
}
