#include <stdio.h>
#include "helper.h"

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
