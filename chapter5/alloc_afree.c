#include <assert.h>
#include <stdio.h>
#define ALLOC_SIZE 10000
static char allocbuf[ALLOC_SIZE];
static char *allocp = allocbuf;

char *alloc(int n)
{
    if (allocbuf + ALLOC_SIZE - allocp >= n)
    {
        allocp += n;
        return allocp - n;
    }
    else
    {
        return 0;
    }
}

void afree(char *p)
{
    if (p >= allocbuf && p < allocbuf + ALLOC_SIZE)
    {
        allocp = p;
    }
}

void test_alloc()
{
    char *p1 = alloc(100);
    assert(p1 != NULL);
    char *p2 = alloc(200);
    assert(p2 != NULL);
    char *p3 = alloc(ALLOC_SIZE); // This should fail
    assert(p3 == NULL);
}

void test_afree()
{
    char *p1 = alloc(100);
    char *p2 = alloc(200);
    afree(p2);
    char *p3 = alloc(200);
    assert(p3 == p2); // p3 should reuse the space freed by p2
    afree(p1);
    char *p4 = alloc(100);
    assert(p4 == p1); // p4 should reuse the space freed by p1
}

int main(int argc, char const *argv[])
{
    test_alloc();
    test_afree();
    return 0;
}
