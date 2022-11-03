#include <stdio.h>

int main () {
    char str1[20];

    printf("Enter string: ");
    scanf("%19s", str1);
    printf("Entered string: %s\n", str1);


    int val;
    char follow;

    int read = scanf( "%d%c", &val, &follow );

    if(read == 1){
        printf("%d", val);
    }

    return(0);
}