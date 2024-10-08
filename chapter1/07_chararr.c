#include <stdio.h>
#define MAXLINE 100 /* maxium input line length */

int getoneline(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, char const *argv[])
{
    int count;
    int maxcount;
    char maxline[MAXLINE];
    char line[MAXLINE];

    maxcount = 0;
    while ((count = getoneline(line, MAXLINE)) > 0)
    {
        if (count > maxcount)
        {
            maxcount = count;
            copy(maxline, line);
        }
    }

    if (maxcount > 0)
    {
        printf("longest line is %s", maxline);
    }
    return 0;
}

int getoneline(char line[], int lim)
{
    int c, i;
    for (i = 0; (c = getchar()) != EOF && i < lim - 1 && c != '\n'; i++)
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

void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\n')
    {
        i++;
    }
}
