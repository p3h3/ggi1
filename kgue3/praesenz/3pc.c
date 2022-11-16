#include <stdio.h>

struct partei{
    double prozentsatz;
    int sitze;
    char* name;
};


void printPartei(struct partei p){
    printf("Partei: %s\n", p.name);
    printf("Prozentsatz: %f\n", p.prozentsatz);
    printf("Anzahl Sitze: %d\n", p.sitze);
}


int main() {

    struct partei parteien[3];

    double combined_prozentsatz = 0;

    for(int i = 0; i < 3; i++){
        printf("Eingabe für Partei: %d\n", i);

        char name[31];
        printf("Bitte Parteinamen eingeben (max 30 zeichen): ");
        scanf("%30s", name);

        double prozentsatz;
        printf("Bitte Prozentsatz eingeben (Gleitkommazahl): ");
        scanf("%lf", &prozentsatz);

        struct partei tempPartei = {
                .name = name,
                .prozentsatz = prozentsatz,
                .sitze = 0
        };

        if(prozentsatz > 5){
            combined_prozentsatz += prozentsatz;
        }

        parteien[i] = tempPartei;
    }

    printf("\n\n");

    // sitze basierend auf der 5 % hürde berechnen
    for(int i = 0; i < 3; i++){
        if(parteien[i].prozentsatz > 5){
            // casting to int always rounds down
            parteien[i].sitze = (int) (200 * parteien[i].prozentsatz / combined_prozentsatz);
        }
    }


    for(int i = 0; i < 3; i++){
        printPartei(parteien[i]);
        printf("\n");
    }

    return 0;
}