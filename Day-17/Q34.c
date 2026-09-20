// Write a program to check if a number is prime.
#include <stdio.h>

int main() {
    int n, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2)
        isPrime = 0;
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) 
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("Prime number");
    else
        printf("Not a prime number");

    return 0;
}