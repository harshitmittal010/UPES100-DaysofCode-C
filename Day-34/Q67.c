// Q67: Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int n, a[101], value, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter position and value: ");
    scanf("%d %d", &pos, &value);
    for (int i = n; i >= pos; i--)
         a[i] = a[i - 1];
    a[pos - 1] = value;
    n++;
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
