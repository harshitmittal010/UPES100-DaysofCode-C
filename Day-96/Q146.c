// Q146 (Enum): Read and print employee details with a nested joining-date structure.
#include <stdio.h>

struct Date { int day, month, year; };
struct Employee { char name[100]; int id; struct Date joining_date; };

int main(void)
{
    struct Employee employee;
    if (scanf("%99s %d %d %d %d", employee.name, &employee.id,
              &employee.joining_date.day, &employee.joining_date.month,
              &employee.joining_date.year) != 5) return 1;
    printf("Name: %s\nID: %d\nJoining Date: %02d/%02d/%04d\n",
           employee.name, employee.id, employee.joining_date.day,
           employee.joining_date.month, employee.joining_date.year);
    return 0;
}
