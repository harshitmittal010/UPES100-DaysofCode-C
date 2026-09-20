/*
Q86 (Strings)
Check if a string is a palindrome.
*/

#include <stdio.h>

int main(void)
{
    char str[1000];
    int length = 0, i, palindrome = 1;

    if (fgets(str, sizeof str, stdin) == NULL)
        return 1;

    while (str[length] != '\0' && str[length] != '\n' &&
           str[length] != '\r')
        length++;

    /* Compare characters from opposite ends. */
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
