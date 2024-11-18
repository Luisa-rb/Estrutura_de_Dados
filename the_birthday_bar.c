#include <stdio.h>

int main () {

    int barraDeChocolate[100];
    int diaAniversarioRon; //soma dos valores
    int mesAniversarioRon; //tamanho do pedaco
    int tamanhoTotalBarra, jeitosDeDividir, qtdDePedacos, somaValorPedacos;

    scanf("%d", &tamanhoTotalBarra);

    qtdDePedacos = 0;

    for (int i = 0; i < tamanhoTotalBarra; i++) {
        scanf("%d", &barraDeChocolate[i]);
    }

    scanf("%d %d", &diaAniversarioRon, &mesAniversarioRon);

    for (int i = 0; i <= tamanhoTotalBarra - mesAniversarioRon; i++) {

        somaValorPedacos = 0;

        for (int j = i; j < i + mesAniversarioRon; j++) {
            somaValorPedacos += barraDeChocolate[j];
        }

        if (somaValorPedacos == diaAniversarioRon) {
            qtdDePedacos++;
        }
    }

    printf("%d\n", qtdDePedacos);

    return 0;
}