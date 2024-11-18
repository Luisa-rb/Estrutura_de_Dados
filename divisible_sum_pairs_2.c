#include <stdio.h>
#define max 100

void AcharParesDivisiveis (int array[max],int tamanhoArray, int divisor, int *qtdDeParesDivisiveis) {

    for (int i = 0; i < tamanhoArray; i++) {
        for (int j = i + 1; j < tamanhoArray; j++) {

            if ((array[i] + array[j]) % divisor == 0) {
                (*qtdDeParesDivisiveis)++;
            }

        }
    }
}

int main () {

    int array[max], tamanhoArray, divisor, qtdDeParesDivisiveis = 0;

    scanf("%d %d", &tamanhoArray, &divisor);

    for (int i = 0; i < tamanhoArray; i++) {

        scanf("%d", &array[i]);

    }

    AcharParesDivisiveis(array, tamanhoArray, divisor, &qtdDeParesDivisiveis);

    printf("%d\n", qtdDeParesDivisiveis);

    return 0;
}