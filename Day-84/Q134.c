// Q134 (Enum): Print a message for a status code.
#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main(void)
{
    int status;
    if (scanf("%d", &status) != 1) return 1;
    switch ((enum Status)status) {
        case SUCCESS: puts("Operation successful."); break;
        case FAILURE: puts("Operation failed."); break;
        case TIMEOUT: puts("Operation timed out."); break;
        default: puts("Invalid status."); return 1;
    }
    return 0;
}
