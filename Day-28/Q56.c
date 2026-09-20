// Q56: Read and print elements of a one-dimensional array.
#include <stdio.h>
int main() {
    int n, a[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Array elements: ");




    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
