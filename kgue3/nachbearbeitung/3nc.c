#include <stdio.h>

struct nutzer{
    char* name;
    int accountstatus;
    char* passwort;
};


void printNutzer(struct nutzer n){
    printf("Name: %s\n", n.name);
    printf("Passwort: %s\n", n.passwort);
    if(n.accountstatus == 1){
        printf("Account status: aktiv\n");
    }else if(n.accountstatus == 0){
        printf("Account status: deaktiv\n");
    }else{
        printf("Account status: %d\n", n.accountstatus);
    }
}


int main() {

    struct nutzer nutzer_array[10];

    int definierte_nutzer = 0;

    for(int i = 0; i < 10; i++){
        printf("Eingabe für Nutzer: %d\n", i);

        int accountstatus;
        char name[31];
        char passwort[31];


        printf("Bitte Accountstatus eingeben (Ganzzahl): ");
        // %u für eine zahl mit vorzeichen (hier um eine negative zahl zu scannen)
        scanf("%u", &accountstatus);

        // kein weiteres handeln nötig
        if(accountstatus == -1){
            break;
        }


        printf("Bitte Nutzernamen eingeben (max 30 zeichen): ");
        scanf("%30s", name);


        printf("Bitte Passwort eingeben (max 30 zeichen): ");
        scanf("%s", passwort);



        struct nutzer tempNutzer = {
                .name = name,
                .passwort = passwort,
                .accountstatus = accountstatus
        };

        nutzer_array[definierte_nutzer] = tempNutzer;


        printNutzer(nutzer_array[definierte_nutzer]);

        definierte_nutzer++;

    }

    printf("\n\n");

    for(int j = 0; j < definierte_nutzer; j++){
        printNutzer(nutzer_array[j]);
        printf("%d\n", j);
        printf("\n");
    }

    return 0;
}