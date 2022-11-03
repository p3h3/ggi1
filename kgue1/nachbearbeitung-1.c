#include <stdio.h>

#define ZAHL 5


int main() {
    int i = 1;
    int fakErgebnis = 1;

    while (i <= ZAHL){
        fakErgebnis *= i;
        i++;

        printf("Die Fakultaet von Zahl %d ist: \t%d\n", i, fakErgebnis);
    }

    return 0;
}