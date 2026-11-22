// Q144 (Enum): Pass a Student structure to a function and print its members.
#include <stdio.h>

struct Student { char name[100]; int roll_no; float marks; };

static void print_student(struct Student s)
{
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
}

int main(void)
{
    struct Student s;
    if (scanf("%99s %d %f", s.name, &s.roll_no, &s.marks) != 3) return 1;
    print_student(s);
    return 0;
}
