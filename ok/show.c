#include <stdio.h>
#include "structure.h"

void showPolynomial(POLYNOMIAL p) {
    printf(" La fonction polynomiale est: %dx^2 + %dx +%d \n", p.a, p.b, p.c);
    return ;
}

void showSolution(SOLUTION s) {
    if (s.nb_sol == 0 ) {
        printf(" Ce polynome ne possède aucune racine réelle. \n");
    }
}