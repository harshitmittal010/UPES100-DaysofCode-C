// Write a program to find the 1's complement of a binary number and print it.
#include <stdio.h>
int main() 
{
    long long n, result = 0, place = 1;
    int digit;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    while (n != 0) {
        digit = n % 10;
        digit = (digit == 0) ? 1 : 0;
        result += digit * place;
        place *= 10;
        n /= 10;
    }
    printf("1's complement = %lld", result);
    return 0;
}