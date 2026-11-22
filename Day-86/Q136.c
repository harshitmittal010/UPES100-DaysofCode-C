// Q136 (Enum): Choose ADD, SUBTRACT, or MULTIPLY and apply it to two numbers.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Operation { ADD, SUBTRACT, MULTIPLY };

int main(void)
{
    char choice[20]; double a, b; int i;
    if (scanf("%19s %lf %lf", choice, &a, &b) != 3) return 1;
    for (i = 0; choice[i]; i++) choice[i] = (char)toupper((unsigned char)choice[i]);
    switch (!strcmp(choice, "ADD") ? ADD : !strcmp(choice, "SUBTRACT") ? SUBTRACT : !strcmp(choice, "MULTIPLY") ? MULTIPLY : -1) {
        case ADD: printf("%.2f\n", a + b); break;
        case SUBTRACT: printf("%.2f\n", a - b); break;
        case MULTIPLY: printf("%.2f\n", a * b); break;
        default: return 1;
    }
    return 0;
}
