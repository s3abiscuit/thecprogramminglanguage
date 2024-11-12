#include <stdio.h>
// copy from t to s
void strcpy1(char *s, char *t)
{
    int i = 0;
    while (t[i] != '\0')
    {
        s[i] = t[i];
        i++;
    }
}

void strcpy2(char *s, char *t)
{
    while ((*s = *t) != '\0')
        t++, s++;
}

void strcpy3(char *s, char *t)
{
    while ((*s++ = *t++) != '\0')
        ;
}

int main(int argc, char const *argv[])
{
    char s1[100];
    char s2[100];
    char s3[100];
    char *t = "Hello, World!";
    strcpy1(s1, t);
    strcpy2(s2, t);
    strcpy1(s3, t);
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);
    return 0;
}