// Q96 (Strings): Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str[1000], temp;
    int i = 0, start, left, right;

    if (fgets(str, sizeof str, stdin) == NULL)
        return 1;
    str[strcspn(str, "\r\n")] = '\0';

    while (str[i] != '\0')
    {
        while (str[i] != '\0' && isspace((unsigned char)str[i]))
            i++;
        start = i;
        while (str[i] != '\0' && !isspace((unsigned char)str[i]))
            i++;

        left = start;
        right = i - 1;
        while (left < right)
        {
            temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
    }

    printf("%s\n", str);
    return 0;
}
