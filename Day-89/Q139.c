// Q139 (Enum): Print enum values to demonstrate their integer representation.
#include <stdio.h>

enum Level { LOW = 1, MEDIUM, HIGH };

int main(void)
{
    printf("LOW = %d\nMEDIUM = %d\nHIGH = %d\n", LOW, MEDIUM, HIGH);
    return 0;
}
