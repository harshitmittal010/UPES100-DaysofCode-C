// Q55: Print all prime numbers from 1 to n.
#include <stdio.h>
int main() {
    int n, prime;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        prime = 1;
        for (int j = 2; j * j <= i; j++) {
             if (i % j == 0) {
                 prime = 0;
                 break;
             }
        }
        if (prime)
             printf("%d ", i);
    }
    return 0;
}
