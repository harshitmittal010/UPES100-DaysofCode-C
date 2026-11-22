// Q145 (Enum): Return the student with the highest marks from a function.
#include <stdio.h>

struct Student { char name[100]; int roll_no; float marks; };

static struct Student top_student(struct Student students[], int n)
{
    struct Student best = students[0]; int i;
    for (i = 1; i < n; i++) if (students[i].marks > best.marks) best = students[i];
    return best;
}

int main(void)
{
    struct Student students[1000], top; int n, i;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (i = 0; i < n; i++)
        if (scanf("%99s %d %f", students[i].name, &students[i].roll_no, &students[i].marks) != 3) return 1;
    top = top_student(students, n);
    printf("%s %d %.2f\n", top.name, top.roll_no, top.marks);
    return 0;
}
