// Q140 (Enum): Read and print a person's gender using an enum field in a struct.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Gender { MALE, FEMALE, OTHER };
struct Person { enum Gender gender; };

int main(void)
{
    char value[20]; int i; struct Person person;
    if (scanf("%19s", value) != 1) return 1;
    for (i = 0; value[i]; i++) value[i] = (char)toupper((unsigned char)value[i]);
    if (!strcmp(value, "MALE")) person.gender = MALE;
    else if (!strcmp(value, "FEMALE")) person.gender = FEMALE;
    else if (!strcmp(value, "OTHER")) person.gender = OTHER;
    else return 1;
    puts(person.gender == MALE ? "Male" : person.gender == FEMALE ? "Female" : "Other");
    return 0;
}
