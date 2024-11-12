#include <stdio.h>

int str_len(char *s);

int main(int argc, char const *argv[])
{
    
    char s[] = "hello";
    printf("%d\n", str_len(s));
    return 0;
}

int str_len(char *s)
{
    int n;
    // for (n = 0; *s != '\0'; s++)
    // {
    //     n++;
    // }
    for (n = 0; s[n] != '\0'; n++)
    {
        ;
    }
    return n;
}
// Output:
