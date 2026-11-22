// Q129 (File Handling): Sum and average the integers in numbers.txt.
#include <stdio.h>

int main(void)
{
    FILE *file = fopen("numbers.txt", "r");
    long long sum = 0;
    int value, count = 0;
    if (!file) { perror("numbers.txt"); return 1; }
    while (fscanf(file, "%d", &value) == 1) { sum += value; count++; }
    if (ferror(file)) { fclose(file); return 1; }
    fclose(file);
    if (!count) { puts("No integers found."); return 0; }
    printf("Sum: %lld\nAverage: %.2f\n", sum, (double)sum / count);
    return 0;
}
