#include <stdio.h>

#define N 10

int main() {
    int summe = 0;
    for(int i = 1; i < N; i++){
        summe += i;
    }

    printf("Summe der Zahlen 1 bis %d: %d", N, summe);

    return 0;
}