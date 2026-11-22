// Q138 (Enum): Print enum names and integer values using a loop.
#include <stdio.h>

enum Color { RED, GREEN, BLUE, YELLOW };

int main(void)
{
    const char *names[] = {"RED", "GREEN", "BLUE", "YELLOW"};
    int i;
    for (i = RED; i <= YELLOW; i++) printf("%s = %d\n", names[i], i);
    return 0;
}
