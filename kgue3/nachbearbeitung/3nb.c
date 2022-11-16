#include <stdio.h>

#define MATRIX_GROESSE 2

void printMatrix(double matrix[MATRIX_GROESSE][MATRIX_GROESSE]){
    for(int i = 0; i < MATRIX_GROESSE; i++){
        for(int j = 0; j < MATRIX_GROESSE; j++){
            // 5.2 => 5 zeichen gesamt, 2 nachkommastellen
            // 3 zeichen vor dem punkt, 1 punkt, 2 nachkommastellen
            printf("| %5.2f ", matrix[i][j]);
        }
        printf("|\n");
    }
}

int main() {

    double skalar = 2.3;

    // beispielwerte, völlig beliebig
    double matrix[MATRIX_GROESSE][MATRIX_GROESSE] = {
            {1,2},
            {2,3}
    };

    printf("Matrix vorher:\n");
    printMatrix(matrix);

    for(int i = 0; i < MATRIX_GROESSE; i++){
        for(int j = 0; j < MATRIX_GROESSE; j++){
            matrix[i][j] = matrix[i][j] * skalar;
        }
    }

    printf("Matrix multipliziert mit %lf:\n", skalar);
    printMatrix(matrix);

    return 0;
}