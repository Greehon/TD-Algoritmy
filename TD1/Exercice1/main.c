#include <stdio.h>
#include <time.h>
#include "Ex1.h"

void main() {
    int n = 20;
    clock_t start, end;
    double time;

    //Test Naïf
    start = clock();
    long long int nF = naiveFibonacci(n);  
    end = clock();
    time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("NaiveFibonacci(%d) = %lli, Time : %f s\n", n, nF, time);

    //Test Dynamique
    long long int DPFib[100];
    for (int i = 0; i <= n; i++){
        DPFib[i] = -1;}

    start = clock();
    long long int dF = dynamiqueFibonacci(n, DPFib); 
    end = clock();
    time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("DynamiqueFibonacci(%i) = %lli , Time : %f s\n", n, dF, time);
}
