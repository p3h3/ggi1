#include <stdio.h>

int a = -2;
unsigned int b = 8;
signed char c = 0;

int main(){

    a--;
    a <<= 3;
    a /= 12;
    a = a % 2;

    b >>= 1;
    b |= 3;
    b ^= 15;
    b += 1;

    c = c - 17;
    c *= -1;
    c += 110;
    c = ~c ^ -1;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}