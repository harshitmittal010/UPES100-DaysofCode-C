// Q98 (Strings): Print initials of a name with the surname displayed in full.
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

    int lastStart = -1, end = (int)strlen(name);
    while (end > 0 && isspace((unsigned char)name[end - 1]))
        name[--end] = '\0';

    for (i = 0; name[i] != '\0'; i++)
        if (!isspace((unsigned char)name[i]) &&
            (i == 0 || isspace((unsigned char)name[i - 1])))
            lastStart = i;

    for (i = 0; i < lastStart; i++)
        if (!isspace((unsigned char)name[i]) &&
            (i == 0 || isspace((unsigned char)name[i - 1])))
            printf("%c.", toupper((unsigned char)name[i]));

    if (lastStart >= 0)
        printf("%s", name + lastStart);
    printf("\n");
    return 0;
}
