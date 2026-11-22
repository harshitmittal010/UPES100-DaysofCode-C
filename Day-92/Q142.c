// Q142 (Enum): Read and print details for five students using structures.
#include <stdio.h>

struct Student { char name[100]; int roll_no; float marks; };

int main(void)
{
    struct Student students[5]; int i;
    for (i = 0; i < 5; i++)
        if (scanf("%99s %d %f", students[i].name, &students[i].roll_no, &students[i].marks) != 3) return 1;
    for (i = 0; i < 5; i++)
        printf("%s %d %.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    return 0;
}
