#include <stdio.h>
#include <stdint.h>
//annahme: int ist ein 16bit datentyp

int main(){
    unsigned char a, b; // 8 bit

    a = 155;
    b = a >> 1;

    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}