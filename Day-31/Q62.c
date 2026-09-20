// Q62: Reverse an array without extra space.
#include <stdio.h>
int main() {
    int n, a[100], temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);



    for (int i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
