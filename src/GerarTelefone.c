#include "../headers/gerartelefone.h"
#include <stdlib.h>

const int dddsBrasil[] = {
    11, 12, 13, 14, 15, 16, 17, 18, 19, 21, 22, 24, 27, 28, 31, 32, 33,
    34, 35, 37, 38, 41, 42, 43, 44, 45, 46, 47, 48, 49, 51, 53, 54, 55,
    61, 62, 64, 63, 65, 66, 67, 68, 69, 71, 73, 74, 75, 77, 79, 81, 87,
    82, 83, 84, 85, 88, 86, 89, 91, 93, 94, 92, 97, 95, 96, 98, 99};

int gerartelefone(int repetir) {
    for (int r = 0; r < repetir; r++) {
        srand(time(NULL));
        int total = sizeof(dddsBrasil) / sizeof(dddsBrasil[0]);

        int ddd = dddsBrasil[rand() % total];

        int numero = 900000000 + (rand() % 100000000);

        printf("(%d)%d\n", ddd, numero);
    };
    return 0;
}
