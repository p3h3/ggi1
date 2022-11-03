#include <stdio.h>
#define ANZAHLBUCH 26

int main() {
    char buchstabe = 65;
    int zaehler = 0;

    printf("Buchstabe\tDez in ASCII-Tabelle\n");


    while (zaehler <= ANZAHLBUCH) {
        printf("%c\t\t\t%d\n", buchstabe, zaehler);
        zaehler++;
        buchstabe++;
    }

    return 0; /*Programm fehlerfrei beendet*/
}