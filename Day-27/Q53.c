// Q53: Print 1,3,5,7,9 then 7,5,3,1 stars.
#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 2 * i - 1; j++)
             printf("*");
        printf("\n");
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 1; j <= 2 * i - 1; j++)
             printf("*");
        printf("\n");
    }
    return 0;
}
