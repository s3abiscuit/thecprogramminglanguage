// Program: strlen2.c
// Purpose: Write a function that returns the length of a string.
#include <stdio.h>
int strlen2(char *s)
{
    char *p = s;
    while (*p != '\0')
    {
        p++;
    }
    return p - s;
}

int main(int argc, char const *argv[])
{
    
    char s[] = "Hello, World!";
    printf("%d\n", strlen2(s));
    return 0;
}
