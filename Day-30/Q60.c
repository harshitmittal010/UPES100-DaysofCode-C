// Q60: Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main() {
    int n, a[100], positive = 0, negative = 0, zero = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > 0) positive++;
        else if (a[i] < 0) negative++;
        else zero++;
    }
    printf("Positive = %d\nNegative = %d\nZero = %d", positive, negative, zero);
    return 0;
}
