// Q66: Insert an element in a sorted array.
#include <stdio.h>
int main() {
    int n, a[101], value, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter element to insert: ");
    scanf("%d", &value);
    i = n - 1;
    while (i >= 0 && a[i] > value) {
         a[i + 1] = a[i];
         i--;
    }
    a[i + 1] = value;
    n++;
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
