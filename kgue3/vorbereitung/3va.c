#include <stdio.h>

// koordinaten für einen üunkt im 3d raum
struct Datensatztyp1 {
    float x, y, z;
};

// beschreibt eine kugel im 3d raum
// (hat einen mittelpunkt mit Datensatztyp1(xyz) und einen radius)
struct Datensatztyp2 {
    struct Datensatztyp1 mittelpunkt;
    int radius;
};

// beschreibt ein klartext benutzer konto
struct Datensatztyp3 {
    char benutzername[30];
    char passwort[10];
};

int main () {
    return(0);
}