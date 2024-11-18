#include <stdio.h>
#include <string.h>
#define max 100000

void ContadorDePalavras (char str[max], int *numeroDePalavras, int tamanhoString) {
    for (int i = 0; i < tamanhoString; i++) {

        if (str[i] >= 65 && str[i] <= 90) {
            (*numeroDePalavras)++;
        }
    }
}

int main () {

    char str[max];
    int numeroDePalavras = 1, tamanhoString;

    scanf("%s", str);

    tamanhoString = strlen(str);

    ContadorDePalavras(str, &numeroDePalavras, tamanhoString);

    printf("%d\n", numeroDePalavras);

    return 0;
}