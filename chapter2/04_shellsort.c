#include <stdio.h>

void shellsort(int v[], int n);

int main(int argc, char const *argv[])
{
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    shellsort(v, 10);
    return 0;
}

void shellsort(int v[], int n)
{
    int gap, i, j, temp;
    for (gap = n / 2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap)
            {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
}
