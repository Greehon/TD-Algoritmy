#include <stdio.h>
#include "Ex2.h"
#include <math.h>

int NaivePrimeNumber(int n){
    int count = n-2 ; 
    for (int i = 2; i < n;i++){
        for (int j = 2; j < (int) sqrt(i)+1; j++){
            if (i%j ==0 ){
                count--;
                break;
            }
        }
    }

    return count;
}

int EfficientPrimeNumber(int n){
    int count = 0;
    char PrimeNumber[n+1]; 
    // On initialise avec char pour pouvoir avoir un n plus grand que int ou short
    

    for (int i = 0; i < n + 1; i++) { //1 si Nombre premeir 0 sinon
        PrimeNumber[i]=1;}
    PrimeNumber[0] = 0;
    PrimeNumber[1] = 0;

    for (int i = 2; i*i < n + 1; i++){
        if (PrimeNumber[i]){
            for (int j = i*i; j < n + 1; j+=i){
                PrimeNumber[j]=0;
            }
        }
    } 

    for (int i = 2; i <= n; i++ ){
        if (PrimeNumber[i]){
            count++;
        }
    }

    return count;
}
