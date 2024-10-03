#include <stdio.h>

#define IN 1
#define OUT 0

/**
 * word count
 */
int main(int argc, char const *argv[])
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (state == OUT)
        {
            state = IN;
            nw++;
        }
        else if (c == '\n' || c == ' ' || c == '\t') // word divider
        {
            state = OUT;
        }
    }
    printf("character count: %d\n", nc);
    printf("word count: %d\n", nw);
    printf("line count: %d\n", nl);
    return 0;
}
