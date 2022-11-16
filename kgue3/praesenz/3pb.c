#include <stdio.h>

#define MATRIX_GROESSE 4

void printMatrix(int matrix[MATRIX_GROESSE][MATRIX_GROESSE]){
    for(int i = 0; i < MATRIX_GROESSE; i++){
        for(int j = 0; j < MATRIX_GROESSE; j++){
            printf("| %d ", matrix[i][j]);
        }
        printf("|\n");
    }
}

int main() {
    int matrix[MATRIX_GROESSE][MATRIX_GROESSE] = {
            {1,2,3,4},
            {2,3,4,5},
            {3,4,5,6},
            {9,8,7,6}
    };

    printf("Matrix vorher:\n");
    printMatrix(matrix);

    int matrix_transponiert[MATRIX_GROESSE][MATRIX_GROESSE];

    for(int i = 0; i < MATRIX_GROESSE; i++){
        for(int j = 0; j < MATRIX_GROESSE; j++){
            matrix_transponiert[i][j] = matrix[j][i];
        }
    }

    printf("Matrix transponiert:\n");
    printMatrix(matrix_transponiert);


    return 0;
}