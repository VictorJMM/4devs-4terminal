#include "headers/gerarcpf.h"
#include "headers/gerartelefone.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Use: %s <função> <quantidade>\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "gerarcpf") == 0) {
        int n = atoi(argv[2]);
        srand(time(NULL) + clock()) ;
        gerarcpf(n);

    } else if (strcmp(argv[1], "gerartelefone") == 0) {
        int n = atoi(argv[2]);
        gerartelefone(n);
    } else {
        printf("Comando incorreto use %s <help>\n", argv[0]);
    }

    return 0;
}
