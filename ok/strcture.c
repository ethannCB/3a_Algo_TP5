#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "structure.h"

int saisie(POLYNOMIAL p){
    char entree[100];
    char *reste;
    printf("Entrer votre fonction polynomiale de la forme ax^2 + bx + c : ");
    fgets(entree, sizeof(entree), stdin);
    p.a =(int)strtol(entree, &reste, 10);
    p.b =(int)strtol(reste, &reste, 10);
    p.c =(int)strtol(reste, NULL , 10);

}
void setNoSolution(SOLUTION* s){
    s->nb_sol = 0;
    return ;
}
void setOneSolution(SOLUTION* s, double x1){
    s->nb_sol = 1;
    s->sol[0] = x1;
    return ;
}

void setTwoSolutions(SOLUTION* s, double x1, double x2) {
    s->nb_sol = 2;
    s->sol[0] = x1;
    s->sol[1] = x2;
    return ;
}