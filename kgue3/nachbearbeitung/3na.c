#include <stdio.h>

#define konstante 15

int main() {
    char str [31];
    char str_enc [31];
    char str_dec [31];

    printf("Bitte String eingeben(max 30 zeichen): ");
    scanf("%30s",str);

    printf("Eingabestring: %s\n", str);

    for(int i = 0; i < 30; i++){
        if(str[i] == '\0'){
            // end of input reached
            str_enc[i] = '\0';
            break;
        }
        str_enc[i] = str[i] ^ konstante;
    }

    printf("Encodierter String: %s\n", str_enc);


    for(int i = 0; i < 30; i++){
        if(str_enc[i] == '\0'){
            // end of input reached
            str_dec[i] = '\0';
            break;
        }
        str_dec[i] = str_enc[i] ^ konstante;
    }


    printf("Decodierter String: %s\n", str_dec);


    return 0;
}