// haha funny file name

#include <stdio.h>

#define pi 3.1415

int main() {
    // radius eingeben
    float r;
    printf("Radius: ");
    scanf("%f", &r);

    // ergebnis berechnen
    float umfang = 2*pi*r;
    float flaeche = r*r*pi;

    // ergebnis ausgeben
    printf("Der Umfang eines Kreises mit radius %f ist: %f\n", r, umfang);
    printf("Die Flaeche eines Kreises mit radius %f ist: %f\n", r, flaeche);
    return 0;
}