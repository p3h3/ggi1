#include <stdio.h>

#define BUCHSTABE 'a'
#define MAX_VERSUCHE 3

int main() {
    for(int i = 0; i < MAX_VERSUCHE; i++){
        printf("Versuche, den buchstaben zu erraten: ");

        if(getchar() == BUCHSTABE){
            printf("yessir richtig");
            break;
        }

        // entsorgen des "newline" chars
        getchar();
    }
    printf("sorry, vorbei");
    return 0;
}

