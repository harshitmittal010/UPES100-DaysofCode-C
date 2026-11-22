// Q127 (File Handling): Convert input.txt lowercase letters to uppercase in output.txt.
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    FILE *in = fopen("input.txt", "r"), *out;
    int c, failed = 0;
    if (!in) { perror("input.txt"); return 1; }
    out = fopen("output.txt", "w");
    if (!out) { perror("output.txt"); fclose(in); return 1; }
    while ((c = fgetc(in)) != EOF)
        if (fputc(toupper((unsigned char)c), out) == EOF) { failed = 1; break; }
    if (ferror(in)) failed = 1;
    if (fclose(in) != 0) failed = 1;
    if (fclose(out) != 0) failed = 1;
    return failed ? 1 : 0;
}
