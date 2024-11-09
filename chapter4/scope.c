#include <stdio.h>
#include <string.h>

int a;
int add_one(int x);

int main(int argc, char const *argv[])
{
    // extern int a;
    // extern int add_one(int x);

    printf("%d\n", a);
    printf("%d\n", add_one(a));
    return 0;
}


int a = 1;
int add_one(int x)
{
    return x + 1;
}