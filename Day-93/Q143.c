// Q143 (Enum): Find and print the student with the highest marks.
#include <stdio.h>

struct Student { char name[100]; int roll_no; float marks; };

int main(void)
{
    struct Student s, best; int n, i;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    if (scanf("%99s %d %f", best.name, &best.roll_no, &best.marks) != 3) return 1;
    for (i = 1; i < n; i++) {
        if (scanf("%99s %d %f", s.name, &s.roll_no, &s.marks) != 3) return 1;
        if (s.marks > best.marks) best = s;
    }
    printf("%s %d %.2f\n", best.name, best.roll_no, best.marks);
    return 0;
}
