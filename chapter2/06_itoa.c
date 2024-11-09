#include <stdio.h>
#include <string.h>

void itoa(int n, char s[]);
void reverse(char s[]);

int main(int argc, char const *argv[])
{
    char s[100];
    itoa(-2147483648, s); // int overflow
    // itoa(-1, s); // int overflow
    printf("%s\n", s);
    return 0;
}

void itoa(int n, char s[])
{
    int i, sign;
    unsigned int n_abs;

    sign = n;
    n_abs = (n < 0) ? (unsigned int)(-(long)n) : n;

    i = 0;
    do
    {
        s[i++] = n_abs % 10 + '0';
    } while ((n_abs /= 10) > 0);

    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

void reverse(char s[])
{
    int c, i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i], s[i] = s[j], s[j] = c;
    }
}