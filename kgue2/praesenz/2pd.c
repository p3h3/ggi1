#include <stdio.h>
#include <string.h>

#define MATRIXGROESSE 15

int main() {

    int matrix[MATRIXGROESSE * MATRIXGROESSE];
    memset(matrix, 0, MATRIXGROESSE*MATRIXGROESSE);

    int counter = 0;

    for(int i = 1; i <= MATRIXGROESSE; i++){
        for(int j = 1; j <= MATRIXGROESSE; j++){
            matrix[counter] = i * j;

            counter ++;
        }
    }

    printf("     |");
    for(int i = 1; i <= MATRIXGROESSE; i++){
        printf("|%4d ", i);
    }
    printf("\n");
    for(int i = 1; i <= MATRIXGROESSE + 1; i++){
        printf("------");
    }
    printf("\n");



    counter = 0;

    for(int i = 1; i <= MATRIXGROESSE; i++){
        printf("%4d |", i);
        for(int j = 1; j <= MATRIXGROESSE; j++){
            printf("|%4d ", matrix[counter]);

            counter ++;
        }
        printf("\n");
    }

    return 0;
}