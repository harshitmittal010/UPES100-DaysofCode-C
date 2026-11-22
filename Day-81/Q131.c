// Q131 (Enum): Print each day of the week and its integer value.
#include <stdio.h>

enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main(void)
{
    const char *names[] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"};
    int i;
    for (i = SUNDAY; i <= SATURDAY; i++) printf("%s = %d\n", names[i], i);
    return 0;
}
