#include <stdio.h>
#include <stdint.h>
//annahme: int ist ein 16bit datentyp

int main(){
    uint16_t ux, uy;

    char a, b; // 8 bit
    int16_t x, y; // 16 bit

    ux=65535; // 0xFF
    uy=ux+1;  // 0x00 (overflow)

    a = 65; // 65
    b = a+1; // 66 (no overflow since char is uint8_t - max 255)

    x = 32767; // max value of 15 bit (since x is signed)
    y = x+1;   // should be -32767 because msb is now 1, yet every other bit is 0

    printf("%d\n", ux);
    printf("%d\n", uy);

    printf("%d\n", a);
    printf("%d\n", b);

    printf("%d\n", x);
    printf("%d\n", y);

    return 0;
}