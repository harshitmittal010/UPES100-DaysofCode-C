// Q64: Find the most frequent digit in an integer number.
#include <stdio.h>
int main() {
    long long n;
    int count[10] = {0}, digit, maxDigit = 0;
    printf("Enter a number: ");
    scanf("%lld", &n);
    if (n == 0) count[0] = 1;



    while (n != 0) {
        digit = n % 10;
        if (digit < 0) digit = -digit;
        count[digit]++;
        n /= 10;
    }
    for (int i = 1; i < 10; i++)
        if (count[i] > count[maxDigit]) maxDigit = i;
    printf("Most frequent digit = %d", maxDigit);
    return 0;
}
