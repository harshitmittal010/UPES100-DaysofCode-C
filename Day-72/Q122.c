// Q122 (File Handling): Print a text file's contents through EOF.
#include <stdio.h>

int main(void)
{
    FILE *file = fopen("info.txt", "r");
    int c;
    if (!file) { perror("info.txt"); return 1; }
    while ((c = fgetc(file)) != EOF) putchar(c);
    if (ferror(file)) { fclose(file); return 1; }
    fclose(file);
    return 0;
}
