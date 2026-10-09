// Q99 (Strings): Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main(void)
{
    int day, month, year;
    const char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (scanf("%d/%d/%d", &day, &month, &year) != 3)
        return 1;
    if (year < 1 || year > 9999 || month < 1 || month > 12)
    {
        printf("Invalid date\n");
        return 0;
    }
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        days[1] = 29;
    if (day < 1 || day > days[month - 1])
        printf("Invalid date\n");
    else
        printf("%02d-%s-%04d\n", day, months[month - 1], year);
    return 0;
}
