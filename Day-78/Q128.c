// Q128 (File Handling): Count alphabetic vowels and consonants in info.txt.
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    FILE *file = fopen("info.txt", "r");
    int c, vowels = 0, consonants = 0;
    if (!file) { perror("info.txt"); return 1; }
    while ((c = fgetc(file)) != EOF) if (isalpha((unsigned char)c)) {
        c = tolower((unsigned char)c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') vowels++;
        else consonants++;
    }
    if (ferror(file)) { fclose(file); return 1; }
    fclose(file);
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
