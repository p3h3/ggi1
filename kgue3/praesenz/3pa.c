#include <stdio.h>

int main() {
    char str [128];

    printf("Bitte String eingeben(max 128 zeichen): ");
    scanf("%128s",str);

    unsigned int counter = 0;

    for(int i = 0; i < 128; i++){
        if(str[i] == 'e'){
            counter ++;
        }
    }

    printf("In der Eingabe gibt es %d e's", counter);

    return 0;
}