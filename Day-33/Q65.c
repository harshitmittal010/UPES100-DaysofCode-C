// Q65: Search in a sorted array using binary search.
#include <stdio.h>
int main() {
    int n, a[100], key, low = 0, high, mid, found = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) {
             found = mid;
             break;
        } else if (a[mid] < key)
             low = mid + 1;
        else
             high = mid - 1;
    }
    if (found != -1) printf("Element found at position %d", found + 1);
    else printf("Element not found");
    return 0;
}
