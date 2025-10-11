#include <stdio.h>
#include <time.h>
#include "Ex2.h"

void main() {
    int n = 8000000; //Il faut n < 8000000 a peu près sinon EfficientPrimeNumber crash car plus assez de place dans le tableau
    clock_t start, end;
    double time;

    //Test Naïf
    start = clock();
    int nP = NaivePrimeNumber(n);
    end = clock();
    time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Il y a %i nombres premiers entre 0 et %i, Naive Time : %f\n", nP, n, time); 

     //Test Efficient
    start = clock();
    int eP = EfficientPrimeNumber(n);
    end = clock();
    time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Il y a %i nombres premiers entre 0 et %i, Efficient Time : %f\n", eP, n, time); 
}

// Pour la compilation ne pas oublier -lm