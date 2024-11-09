#include <stdio.h>
#include <ctype.h>

int atoi(char s[]);

int main(int argc, char const *argv[])
{
    printf("%d\n", atoi("12345"));
    printf("%d\n", atoi("12345abc"));
    printf("%d\n", atoi("abc12345"));
    printf("%d\n", atoi("-12345"));
    return 0;
}

int atoi(char s[])
{
    int i, n, sign;
    // c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v'
    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    n = 0;
    for (; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0');
    return sign * n;
}
