// Q130 (File Handling): Store and read student records (name, roll number, marks).
#include <stdio.h>

struct Student { char name[100]; int roll; float marks; };

int main(void)
{
    struct Student students[100];
    int n, i;
    FILE *file = fopen("students.txt", "w");
    if (!file) { perror("students.txt"); return 1; }
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) { fclose(file); return 1; }
    for (i = 0; i < n; i++)
        if (scanf("%99s %d %f", students[i].name, &students[i].roll, &students[i].marks) != 3 ||
            fprintf(file, "%s %d %.2f\n", students[i].name, students[i].roll, students[i].marks) < 0) {
            fclose(file); return 1;
        }
    if (fclose(file) != 0) return 1;
    file = fopen("students.txt", "r");
    if (!file) { perror("students.txt"); return 1; }
    for (i = 0; i < n; i++) {
        if (fscanf(file, "%99s %d %f", students[i].name, &students[i].roll, &students[i].marks) != 3) {
            fclose(file); return 1;
        }
        printf("%s %d %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }
    fclose(file);
    return 0;
}
