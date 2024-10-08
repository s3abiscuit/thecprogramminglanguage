#include <stdio.h>

/**
 * fahrenheit to celsius using symbolic constants
 */

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(int argc, char const *argv[])
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0 * (fahr - 32)));
    }
    return 0;
}
