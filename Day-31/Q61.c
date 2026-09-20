// Q61: Search for an element using linear search.
#include <stdio.h>
int main() {
    int n, a[100], key, found = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
         scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
         if (a[i] == key) {
             found = i;
             break;
         }
    }
    if (found != -1)
         printf("Element found at position %d", found + 1);
    else
         printf("Element not found");
    return 0;
}
