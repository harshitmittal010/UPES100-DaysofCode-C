// Q59: Count even and odd numbers in an array.
#include <stdio.h>
int main() {
    int n, a[100], even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Even = %d\nOdd = %d", even, odd);
    return 0;
}
