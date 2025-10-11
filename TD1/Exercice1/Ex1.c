#include <stdio.h>
#include "Ex1.h"

//Code naive
long long int naiveFibonacci (int n){
    if (n<=1){return n;}
    else{  return naiveFibonacci(n-1) + naiveFibonacci(n-2);
    }
}

//Code dynamique
long long int dynamiqueFibonacci(int n, long long int DPFib[]) {
    if (n <= 1)
        return n;

    if (DPFib[n] != -1)
        return DPFib[n];

    DPFib[n] = dynamiqueFibonacci(n - 1, DPFib) + dynamiqueFibonacci(n - 2, DPFib);
    return DPFib[n];
}

