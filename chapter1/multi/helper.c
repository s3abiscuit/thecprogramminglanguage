#include <stdio.h>
#include "helper.h"

int getoneline(void)
{
    int c, i;

    extern char line[];

    for (i = 0; (c = getchar()) != EOF && i < MAXLINE - 1 && c != '\n'; i++)
    {
        line[i] = c;
    }

    if (c == '\n')
    {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

void copy(void)
{
    int i;
    i = 0;

    extern char line[], maxline[];
    while ((maxline[i] = line[i]) != '\n')
    {
        i++;
    }
}
