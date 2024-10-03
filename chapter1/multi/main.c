#include <stdio.h>
#include "helper.h"

int maxcount;

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
