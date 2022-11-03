#include <stdio.h>
int main ()
{
    unsigned char x = 141;
    unsigned char y = 166;
    unsigned char z = 161;
    unsigned char q = 88;
    unsigned char u = 0;
    unsigned char v = 0;
    unsigned char w = 0;
    u = x ^ y;
    v = u & z;
    w = v | q;
    printf("%d", w); // wtf the format is wrong in the pdf
    return 0;
}