#include <stdio.h>

#define N 3
#define ZAHL 4

int main() {
    int ergebnis = ZAHL * (1 << N);

    printf("%d * 2^%d = %d", ZAHL, N, ergebnis);

    return 0;
}