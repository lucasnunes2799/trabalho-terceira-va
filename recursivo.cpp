#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Função recursiva para calcular um termo n da sequência de fibonacci*/

long long int fiboR(int n){
    if(n == 1)
        return 0;
    else{
        if(n == 2)
            return 1;
        else
            return fiboR(n - 1) + fiboR(n - 2);
    }
}

int main () {

    int n = 50;
    time_t tIni, tFim;

    tIni = time(NULL);
    printf("Fibonacci recursivo: %lld\n", fiboR(n));
    tFim = time(NULL);
    printf("\tTempo em segundos: %f\n\n", difftime(tFim, tIni));

    return 0;
}
