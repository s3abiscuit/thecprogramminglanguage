#include <stdio.h>
#define MAXLINE 100 /* maxium input line length */

char line[MAXLINE]; // shared between getoneline and copy
char maxline[MAXLINE]; // shared between main and copy

int getoneline(void);
void copy(void);

int main(int argc, char const *argv[])
{
    extern char maxline[MAXLINE];

    int count;
    int maxcount;

    maxcount = 0;
    while ((count = getoneline()) > 0)
    {
        if (count > maxcount)
        {
            maxcount = count;
            copy();
        }
    }

    if (maxcount > 0)
    {
        printf("longest line is %s", maxline);
    }
    return 0;
}

int getoneline(void)
{
    extern char line[];

    int c, i;

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
    extern char line[], maxline[];

    int i;
    i = 0;

    while ((maxline[i] = line[i]) != '\n')
    {
        i++;
    }
}
