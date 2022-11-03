#include <stdio.h>
#define MAX 30 /* bis zu dieser Zahl wird getestet */
#define TEILER 3 /* Teilbarkeit durch TEILER wird geprueft */


int prog2() {
    int aktZahl = 1; /*aktuelle Zahl, die auf Teilbarkeit geprueft wird*/

    while(aktZahl <= MAX) {
        if(aktZahl % TEILER == 0)
            printf("%d ist durch %d teilbar.\n", aktZahl, TEILER);
        aktZahl = aktZahl + 1;
        }
    return 0;
}


int prog1() {
    int aktZahl; /*aktuelle Zahl, die auf Teilbarkeit geprueft wird*/

    for(aktZahl = 1; aktZahl <= MAX; aktZahl++) {
        if(aktZahl % TEILER == 0) {
            printf("%d ist durch %d teilbar.\n", aktZahl, TEILER);
            }
        }
    return 0;
}




int main(){
    prog1();
    prog2();

    // sowohl ergebnis als auch verhalten sind gleich,
    // da in programm 2 einfach nur die while schleife durch eine for schleife ersetzt wurde.
}
