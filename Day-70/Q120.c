// Q120 (File Handling): Convert input text to sentence case.
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char line[10000];
    int c, i = 0, first = 1;
    while ((c = getchar()) != EOF && c != '\n' && i < (int)sizeof(line) - 1) line[i++] = (char)c;
    line[i] = '\0';
    for (i = 0; line[i]; i++) {
        unsigned char ch = (unsigned char)line[i];
        if (isalpha(ch)) { line[i] = (char)(first ? toupper(ch) : tolower(ch)); first = 0; }
    }
    puts(line);
    return 0;
}
