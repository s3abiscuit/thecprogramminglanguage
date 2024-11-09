#include <ctype.h>
#include <stdio.h>

double atof(char s[]);
int atoi(char s[]);
int main(int argc, char const *argv[])
{
    printf("%f\n", atof("123.456"));
    printf("%d\n", atoi("123456"));
    return 0;
}

double atof(char s[])
{
    double val, power;
    int i, sign;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    return sign * val / power;
}

int atoi(char s[])
{
    return (int)atof(s);
}