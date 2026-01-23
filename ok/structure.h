#pragma once

typedef struct {
    int a;
    int b;
    int c;
} POLYNOMIAL;

typedef struct {
    int nb_sol;
    int sol[2];
} SOLUTION;


int saisie(POLYNOMIAL p);
void setNoSolution(SOLUTION* s);
void setOneSolution(SOLUTION* s, double x1);
void setTwoSolutions(SOLUTION* s, double x1, double x2);
