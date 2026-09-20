// Q83: Count vowels and consonants in a string.
#include <stdio.h>

int main(void)
{
    char str[1000];
    printf("Enter a string: ");
    if (fgets(str, sizeof str, stdin) == NULL)
        return 1;

    int vowels = 0, consonants = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + ('a' - 'A');
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels = %d\nConsonants = %d\n", vowels, consonants);
    return 0;
}
