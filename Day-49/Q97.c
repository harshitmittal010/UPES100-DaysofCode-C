// Q97 (Strings): Print the initials of a name.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char name[1000];
    int i;
    if (fgets(name, sizeof name, stdin) == NULL)
        return 1;
    name[strcspn(name, "\r\n")] = '\0';

    for (i = 0; name[i] != '\0'; i++)
    {
        if (!isspace((unsigned char)name[i]) &&
            (i == 0 || isspace((unsigned char)name[i - 1])))
            printf("%c.", toupper((unsigned char)name[i]));
    }
    printf("\n");
    return 0;
}
