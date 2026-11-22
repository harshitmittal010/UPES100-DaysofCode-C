// Q135 (Enum): Demonstrate explicitly assigned enum values starting from 10.
#include <stdio.h>

enum Number { TEN = 10, ELEVEN, TWELVE, THIRTEEN, FOURTEEN };

int main(void)
{
    printf("TEN = %d\nELEVEN = %d\nTWELVE = %d\nTHIRTEEN = %d\nFOURTEEN = %d\n",
           TEN, ELEVEN, TWELVE, THIRTEEN, FOURTEEN);
    return 0;
}
