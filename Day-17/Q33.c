// Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main() {
    int n, original, temp, remainder, digits = 0;
    int sum = 0, power = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Armstrong number");
        return 0;
    }

    original = n;
    temp = n;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0) {
        remainder = temp % 10;
        power = 1;

        for (int i = 1; i <= digits; i++)
            power *= remainder;

        sum += power;
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}