// Q132 (Enum): Print the traffic-light action for RED, YELLOW, or GREEN.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main(void)
{
    char input[20]; int i;
    if (scanf("%19s", input) != 1) return 1;
    for (i = 0; input[i]; i++) input[i] = (char)toupper((unsigned char)input[i]);
    if (!strcmp(input, "RED")) puts("Stop");
    else if (!strcmp(input, "YELLOW")) puts("Wait");
    else if (!strcmp(input, "GREEN")) puts("Go");
    else return 1;
    return 0;
}
