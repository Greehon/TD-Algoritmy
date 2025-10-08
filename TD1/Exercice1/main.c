#include <stdio.h>
#include <time.h>
#include <Ex1.h>

void main(){
    int n = 15;
    clock_t start, end;
    double seconds;

    //Test Naif
    long long nF = naiveFibbonnaci(n);
    printf("NaiveFibonacci  \n",n, nF);

    //Test Dynamique
}
