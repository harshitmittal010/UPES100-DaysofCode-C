// Q44: Sum 1 + 3/4 + 5/6 + 7/8 + ... up to n terms.
#include <stdio.h>
int main() {
    int n;
    double sum = 1.0;




    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
        sum += (double)(2 * i - 1) / (2 * i);
    printf("Sum = %.2f", sum);
    return 0;
}
