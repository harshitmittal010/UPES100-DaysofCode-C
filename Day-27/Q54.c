// Q54: Print a centered diamond star pattern.
#include <stdio.h>
int main() {
    for (int i = 1; i <= 4; i++) {
        for (int s = 1; s <= 4 - i; s++)
             printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
             printf("*");
        printf("\n");
    }
    for (int i = 3; i >= 1; i--) {
        for (int s = 1; s <= 4 - i; s++)
             printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
             printf("*");
        printf("\n");
    }
    return 0;
}
