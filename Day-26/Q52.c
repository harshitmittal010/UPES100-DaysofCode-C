// Q52: Print the star pattern shown in the question.
// Groups contain 1, 3, 5, 3, and 1 stars, with one star per line.
#include <stdio.h>

int main(void) {
    for (int group = 1; group <= 5; group++) {
        int stars = (group <= 3) ? 2 * group - 1 : 2 * (6 - group) - 1;

        for (int star = 1; star <= stars; star++) {
            printf("*\n");
        }

        if (group < 5) {
            printf("\n");
        }
    }

    return 0;
}
