// Q121 (File Handling): Save a person's name and age in info.txt.
#include <stdio.h>

int main(void)
{
    char name[100];
    int age;
    FILE *file;
    if (scanf("%99s %d", name, &age) != 2) return 1;
    file = fopen("info.txt", "w");
    if (!file) { perror("info.txt"); return 1; }
    if (fprintf(file, "Name: %s\nAge: %d\n", name, age) < 0) { fclose(file); return 1; }
    if (fclose(file) != 0) return 1;
    puts("Data saved successfully.");
    return 0;
}
