// Q133 (Enum): Print the number of days in a selected month (February uses 28).
#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Month { JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

int main(void)
{
    char month[20]; int i, value = 0;
    const char *names[] = {"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};
    if (scanf("%19s", month) != 1) return 1;
    for (i = 0; month[i]; i++) month[i] = (char)toupper((unsigned char)month[i]);
    for (i = 0; i < 12; i++) if (!strcmp(month, names[i])) { value = i + 1; break; }
    if (!value) return 1;
    switch ((enum Month)value) {
        case APRIL: case JUNE: case SEPTEMBER: case NOVEMBER: puts("30 days"); break;
        case FEBRUARY: puts("28 days"); break;
        default: puts("31 days");
    }
    return 0;
}
