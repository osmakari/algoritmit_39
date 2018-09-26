#include <stdio.h>
#include <stdlib.h>
#include <iostream>

double reku (int n) {
    if(n == 0) {
        printf("Ei kutsua\n");
        return 1;
    }
    else {
        printf("Uusi kutsu\n");
        return 1/(1 + reku(n - 1));
    }
}

/*
$ ./t3 0
    Ei kutsua
    V: 1.000000
$ ./t3 1
    Uusi kutsu
    Ei kutsua
    V: 0.500000
$ ./t3 2
    Uusi kutsu
    Uusi kutsu
    Ei kutsua
    V: 0.666667
$ ./t3 3
    Uusi kutsu
    Uusi kutsu
    Uusi kutsu
    Ei kutsua
    V: 0.600000
$ ./t3 4
    Uusi kutsu
    Uusi kutsu
    Uusi kutsu
    Uusi kutsu
    Ei kutsua
    V: 0.625000
$ ./t3 5
    Uusi kutsu
    Uusi kutsu
    Uusi kutsu
    Uusi kutsu
    Uusi kutsu
    Ei kutsua
    V: 0.615385

*/

int main (int argc, char *argv[]) {

    if(argc < 2) {
        printf("Anna kokonaisluku\n");
        return 1;
    }
    int b = atoi(argv[1]);
    double kk = reku(b);

    printf("V: %f\n", kk);

    return 0;
}