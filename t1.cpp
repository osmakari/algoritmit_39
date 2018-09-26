#include <stdio.h>
#include <stdlib.h>
#include <vector>

std::vector<int> luvut (int b) {
    int k = 0;
    std::vector<int> a;
    a.push_back(1);

    while(a[k] <= b) {
        k++;
        a.push_back((a[k-1] + a[k-1]));
    }

    return a;
}

/*
$ ./t1 13
    Vastaukset:
        1
        2
        4
        8
        16

*/

int main (int argc, char *argv[]) {

    if(argc < 2) {
        printf("Anna kokonaisluku argumenttina!\n");
        return 1;
    }
    
    int b = atoi(argv[1]);

    std::vector<int> c = luvut(b);
    printf("Vastaukset:\n");
    for(std::vector<int>::iterator it = c.begin(); it != c.end(); ++it) {
        printf("    %i\n", *it);
    }

    return 0;
}