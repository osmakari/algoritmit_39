#include <stdio.h>
#include <stdlib.h>
#include <vector>

int Fi (int k) {
    std::vector<int> arr;
    arr.push_back(0);
    arr.push_back(1);
    for(int x = 2; x < k; x++) {
        arr.push_back(arr[x - 2] + arr[x - 1]);
    }

    return arr[arr.size() - 1];
}

int Fr (int k, int *reta = NULL, int *retb = NULL) {
    if(reta == NULL) {
        int a = 0;
        int b = 1;
        int v = 0;
        for(int x = 2; x < k; x++) {
            v = Fr(x, &a, &b);
        }
        return v;
    }
    else {
        int val = *reta + *retb;
        *reta = *retb;
        *retb = val;
        return val;
    }
}
/*
    $ ./t5 10
        Iteratiivinen alkaen 0, 1....
            34
        ------------------------------
        Rekursiivinen alkaen 0, 1....
            34

*/
int main (int argc, char *argv[]) {
    if(argc != 2) {
        printf("Liian vähän parametrejä.\n");
        return 1;
    }
    printf("Iteratiivinen alkaen 0, 1....\n");
    int a = Fi(atoi(argv[1]));
    printf("    %i\n", a);
    printf("------------------------------\n");
    printf("Rekursiivinen alkaen 0, 1....\n");
    int b = Fr(atoi(argv[1]));
    printf("    %i\n", b);

    return 0;
}