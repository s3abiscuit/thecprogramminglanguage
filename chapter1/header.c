#include <stdio.h>
#define MAXLINE 100 /* maxium input line length */

int maxcount;
char line[MAXLINE];
char maxline[MAXLINE];

int getoneline(void);
void copy(void);

int main(int argc, char const *argv[])
{
    int count;
    extern int maxcount;
    extern char maxline[MAXLINE];

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
