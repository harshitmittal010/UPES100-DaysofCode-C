// Q141 (Enum): Read and display one student's name, roll number, and marks.
#include <stdio.h>

struct Student { char name[100]; int roll_no; float marks; };

int main(void)
{
    struct Student s;
    if (scanf("%99s %d %f", s.name, &s.roll_no, &s.marks) != 3) return 1;
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
    return 0;
}
