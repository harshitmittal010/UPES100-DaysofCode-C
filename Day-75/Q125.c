// Q125 (File Handling): Append one line of user text to an existing file.
#include <stdio.h>

int main(void)
{
    char filename[256], line[10000];
    int c, i = 0;
    FILE *file;
    if (scanf("%255s", filename) != 1) return 1;
    while ((c = getchar()) != EOF && c != '\n') { }
    while ((c = getchar()) != EOF && c != '\n' && i < (int)sizeof(line) - 1) line[i++] = (char)c;
    line[i] = '\0';
    file = fopen(filename, "a");
    if (!file) { perror(filename); return 1; }
    if (fprintf(file, "%s\n", line) < 0 || fclose(file) != 0) return 1;
    return 0;
}
