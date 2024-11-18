#include <stdio.h>
#define max 1000000

int main () {

    int tamanhoArray, numeroChave, ocorrenciasDoNumeroChave = 0, array[max];
    int primeiraOcorrencia, ultimaOcorrencia;

    scanf("%d", &tamanhoArray);

    for (int i = 0; i < tamanhoArray; i++) {
        scanf("%d", &array[i]);
    }

    scanf("%d", &numeroChave);

    for(int i = 0; i < tamanhoArray; i++) {
        if (array[i] == numeroChave) {
            ocorrenciasDoNumeroChave++;
        }
    }

    if(ocorrenciasDoNumeroChave == 0) {
        printf("-1 -1 0\n");
        
    } else {

        for (int i = 0; i < tamanhoArray; i++) {

            if(array[i] == numeroChave) {
                primeiraOcorrencia = i;
                break;
            }
        }

        for(int i = tamanhoArray - 1; i >=0; i--) {

            if(array[i] == numeroChave) {
                ultimaOcorrencia = i;
                break;
            }
        }

        printf("%d %d %d\n", primeiraOcorrencia, ultimaOcorrencia, ocorrenciasDoNumeroChave);
    }

    return 0;
}