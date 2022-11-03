#include <stdio.h>

// lässt uns jetzt "byte" statt "unsigned char" schreiben
// man kann also mit "typedef" einen datentypen anders benennen
typedef unsigned char byte;

int main() {

    // beide definitionen sind gleichwertig
    unsigned char wert1;
    byte wert2;

    return 0;
}