// Q70: Rotate an array to the right by k positions.
#include <stdio.h>
int main() {
    int n, a[100], k, temp;
    printf("Enter number of elements: ");




    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter k: ");
    scanf("%d", &k);
    k %= n;
    for (int r = 0; r < k; r++) {
        temp = a[n - 1];
        for (int i = n - 1; i > 0; i--)
            a[i] = a[i - 1];
        a[0] = temp;
    }
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
