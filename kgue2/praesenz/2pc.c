#include <stdio.h>
#include <string.h>

#define BAUMGROESSE 10

int main() {
    char greeting[BAUMGROESSE + 1];

    // careful spongebob!
    memset(greeting, ' ', BAUMGROESSE);

    for(int i = 0; i < BAUMGROESSE; i++){
        greeting[i] = '*';
        printf("%s\n", greeting);
    }

    return 0;
}

