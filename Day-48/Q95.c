// Q95 (Strings): Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[1000], second[1000], doubled[2000];

    if (fgets(first, sizeof first, stdin) == NULL ||
        fgets(second, sizeof second, stdin) == NULL)
        return 1;
    first[strcspn(first, "\r\n")] = '\0';
    second[strcspn(second, "\r\n")] = '\0';

    if (strlen(first) != strlen(second))
    {
        printf("Not rotation\n");
        return 0;
    }

    strcpy(doubled, first);
    strcat(doubled, first);

    if (strstr(doubled, second) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");
    return 0;
}
