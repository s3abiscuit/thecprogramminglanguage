# include <stdio.h>

/**
 * print Fahrenheit-Celsius table using while loop
 */

int main(int argc, char const *argv[])
{
    /* code */
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }
    
    return 0;
}
