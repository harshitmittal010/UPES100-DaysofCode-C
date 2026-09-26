// Q93 (Strings): Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main(void)
{
    char first[1000], second[1000];
    int count[UCHAR_MAX + 1] = {0}, i;

    if (fgets(first, sizeof first, stdin) == NULL ||
        fgets(second, sizeof second, stdin) == NULL)
        return 1;
    first[strcspn(first, "\r\n")] = '\0';
    second[strcspn(second, "\r\n")] = '\0';

    /* Compare exact characters, including case and spaces. */
    for (i = 0; first[i] != '\0'; i++)
        count[(unsigned char)first[i]]++;
    for (i = 0; second[i] != '\0'; i++)
        count[(unsigned char)second[i]]--;

    for (i = 0; i <= UCHAR_MAX; i++)
    {
        if (count[i] != 0)
        {
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}
