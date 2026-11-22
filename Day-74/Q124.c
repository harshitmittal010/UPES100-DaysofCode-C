// Q124 (File Handling): Copy a source file to a destination using fgetc/fputc.
#include <stdio.h>

int main(void)
{
    char source[256], destination[256];
    FILE *in, *out;
    int c, failed = 0;
    if (scanf("%255s %255s", source, destination) != 2) return 1;
    in = fopen(source, "rb");
    if (!in) { perror(source); return 1; }
    out = fopen(destination, "wb");
    if (!out) { perror(destination); fclose(in); return 1; }
    while ((c = fgetc(in)) != EOF) if (fputc(c, out) == EOF) { failed = 1; break; }
    if (ferror(in)) failed = 1;
    if (fclose(in) != 0) failed = 1;
    if (fclose(out) != 0) failed = 1;
    if (failed) { perror("copy"); return 1; }
    return 0;
}
