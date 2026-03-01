#include "../headers/gerarcpf.h"

int gerarcpf(int repetir) {
    int cpf[11];

    for (int r = 0; r < repetir; r++) {
        for (int i = 0; i < 9; i++) {
            cpf[i] = rand() % 10;
        }
        int soma10 = 0;
        for (int i = 0, peso = 10; i < 9; i++, peso--) {
            soma10 += cpf[i] * peso;
        }

        int resto10 = soma10 % 11;
        cpf[9] = (resto10 < 2) ? 0 : 11 - resto10;

        int soma11 = 0;
        for (int i = 0, peso = 11; i < 10; i++, peso--) {
            soma11 += cpf[i] * peso;
        }

        int resto11 = soma11 % 11;
        cpf[10] = (resto11 < 2) ? 0 : 11 - resto11;

        for (int i = 0; i < 11; i++) {
            printf("%d", cpf[i]);

            if (i == 2 || i == 5) printf(".");
            if (i == 8) printf("-");
        }

        printf("\n");
    }

    return 0;
}
