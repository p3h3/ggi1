#include <stdio.h>

char *str = "Hello World!\n";

int main () {

    char* temp = &str[0];

    while (*temp != '\0'){
        temp++;
    }

    printf("%ld: %s", (temp - &str[0]), str);

    return 0;
}