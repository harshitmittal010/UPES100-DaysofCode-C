// Q111 (Logic Enhancers): Find the first negative value in each window of size k.
#include <stdio.h>

int main(void)
{
    int arr[1000], negatives[1000], n, k, i, front = 0, back = 0;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (i = 0; i < n; i++) if (scanf("%d", &arr[i]) != 1) return 1;
    if (scanf("%d", &k) != 1 || k < 1 || k > n) return 1;
    for (i = 0; i < n; i++) {
        while (front < back && negatives[front] <= i - k) front++;
        if (arr[i] < 0) negatives[back++] = i;
        if (i >= k - 1) {
            if (i >= k) printf(" ");
            printf("%d", front < back ? arr[negatives[front]] : 0);
        }
    }
    printf("\n");
    return 0;
}
