#include "headers/gerarcpf.h"


int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Use: %s <função> <quantidade>\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "gerarcpf") == 0) {
        int n = atoi(argv[2]);
        srand(time(NULL) + clock()) ;
        gerarcpf(n);
    }

    return 0;
}
