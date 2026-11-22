// Q126 (File Handling): Read and display the file named by the user.
#include <stdio.h>

int main(void)
{
    char filename[256];
    FILE *file;
    int c;
    if (scanf("%255s", filename) != 1) return 1;
    file = fopen(filename, "r");
    if (!file) { perror(filename); return 1; }
    while ((c = fgetc(file)) != EOF) putchar(c);
    if (ferror(file)) { fclose(file); return 1; }
    fclose(file);
    return 0;
}
