#include <stdio.h>

int binsearch(int x, int v[], int n);

int main(int argc, char const *argv[])
{
    printf("%d\n", binsearch(1, (int[]){1, 2, 3, 4, 5}, 5));
    return 0;
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return v[mid];
    }
    return -1;
}
