#include <stdio.h>
#include <stdlib.h>
#include <iostream>

double fibo (double n) {
    if(n == 0 || n == 1) 
        return 1;

    return fibo(n - 2) + fibo(n - 1);
}

double luku (double n) {
    return (fibo(n - 1)/fibo(n));
}

/*
    $ ./t2 0
        Segmentation fault (indeksi < 0)
    $ ./t2 3
        V: 0.666667
    $ ./t2 5
        V: 0.625000
*/

int main (int argc, char *argv[]) {

    if(argc < 2) {
        printf("Anna kokonaisluku\n");
        return 1;
    }
    int b = atoi(argv[1]);
    double kk = luku(b);

    printf("V: %f\n", kk);

    return 0;
}