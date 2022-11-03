#include <stdio.h> /*Bibliotheksfunktionen einbinden*/
#define ANZAHL 10 /*Vereinbarung von Konstanten*/


int main() { /*Beginn des Hauptprogramms*/
    int zahl = 1; /*Vereinbarung von Variablen*/

    printf("Liste der ersten %d Quadratzahlen:\n",ANZAHL);

    /*Schleifenkopf*/
    while (zahl <= ANZAHL){
        printf("%d\n", zahl*zahl);
        zahl = zahl + 1;
    }/*Ende der Schleife*/

}/*Ende des Hauptpramms*/