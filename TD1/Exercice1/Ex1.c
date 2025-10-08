#include <stdio.h>
#include <time.h>

//Code naive
long long int naiveFibonnaci (int n){
    if (n<=1){return n;}
    else{
        return naiveFibbonnaci(n-1) + naiveFibbonnaci(n-2);
    }
}

//Code dynamique
long long int dynamiqueFibonnaci (int n, long long int DPFib[]){
    if (n<=1){
        return n;
    }

    if (DPFib[n] != -1){
        return DPFib[n];
    }
    else {
        DPFib[n]= dynamiqueFibonnaci (n-1,DPFib) + dynamiqueFibonnaci (n-2,DPFib);
    }
}


