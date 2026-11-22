// Q123 (File Handling): Count characters, whitespace-delimited words, and lines in a file.
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    FILE *file = fopen("info.txt", "r");
    int c, in_word = 0, last = EOF;
    long characters = 0, words = 0, lines = 0;
    if (!file) { perror("info.txt"); return 1; }
    while ((c = fgetc(file)) != EOF) {
        characters++;
        if (c == '\n') lines++;
        if (isspace((unsigned char)c)) in_word = 0;
        else if (!in_word) { words++; in_word = 1; }
        last = c;
    }
    if (ferror(file)) { fclose(file); return 1; }
    if (characters > 0 && last != '\n') lines++;
    fclose(file);
    printf("Characters: %ld\nWords: %ld\nLines: %ld\n", characters, words, lines);
    return 0;
}
