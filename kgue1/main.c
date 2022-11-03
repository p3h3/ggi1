// Präprozessoranweisungen
#include <stdio.h> // inkludiert eine library

#define DELTA_A 1; // textersetzung

// programmstart (main funktion)
int main() {
    // veriablen definition
    int umfang, flaeche;
    int seitenLaenge = 1; // (und initialisierung)

    // schleife
    do {
        // berechnungen für diesen schleifendurchlauf
        umfang = 4 * seitenLaenge;
        flaeche = seitenLaenge * seitenLaenge;

        // ausgabe der berechnungen
        printf("Seitenlaenge = %d cm \t=> Flaeche = %d cm^2 \tund Umfang = %d cm\n", seitenLaenge, flaeche, umfang);

        // schleife weiter zählen
        seitenLaenge = seitenLaenge + DELTA_A;
    } while(umfang != flaeche); // schleifenbedingung (gefährlich!)
}

