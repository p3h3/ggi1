#include <stdio.h>

int main()
{
    int i0, i1, i2, i3, i4;
    double d0, d1, d2, d3, d4;

    d0 = 3/4.0;
    d1 = 3./4;
    d2 = 3/4;
    d3 = d0 + 2;
    d4 = d2 + 2;

    i0 = (3/4.0) + 2;
    i1 = 5 - (3./4);
    i2 = (3/4) + 2;

    i3 = 4 + (1%3);
    i4 = 5 * 8 % 3 / 2;

    printf("d0: %f; d1: %f; d2: %f; d3: %f; d4:%f\n", d0, d1, d2, d3, d4);
    printf("i0: %d; i1: %d; i2: %d; i3: %d; i4:%d\n", i0, i1, i2, i3, i4);


    return 0;
}