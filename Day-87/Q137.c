// Q137 (Enum): Print a message for the selected user role.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Role { ADMIN, USER, GUEST };

int main(void)
{
    char role[20]; int i;
    if (scanf("%19s", role) != 1) return 1;
    for (i = 0; role[i]; i++) role[i] = (char)toupper((unsigned char)role[i]);
    switch (!strcmp(role, "ADMIN") ? ADMIN : !strcmp(role, "USER") ? USER : !strcmp(role, "GUEST") ? GUEST : -1) {
        case ADMIN: puts("Welcome, administrator."); break;
        case USER: puts("Welcome, user."); break;
        case GUEST: puts("Welcome, guest."); break;
        default: puts("Invalid role."); return 1;
    }
    return 0;
}
