#include <stdio.h>

int main () {

    int array[1000], qtd_positivos, qtd_negativos, qtd_zeros, totalDeELementos;
    double fracao_dos_positivos, fracao_dos_negativos, fracao_dos_zeros;
    
    qtd_positivos = 0;
    qtd_negativos = 0;
    qtd_zeros = 0;

    scanf("%d", &totalDeELementos);

    for (int i = 0; i < totalDeELementos; i++) {
        
        scanf("%d", &array[i]);

        if (array[i] > 0) {
            qtd_positivos++;
        } else if (array[i] < 0) {
            qtd_negativos++;
        } else {
            qtd_zeros++;
        }

    }

    fracao_dos_positivos = (double)qtd_positivos/totalDeELementos;
    fracao_dos_negativos = (double)qtd_negativos/totalDeELementos;
    fracao_dos_zeros = (double)qtd_zeros/totalDeELementos;

    printf("%.6lf\n", fracao_dos_positivos);
    printf("%.6lf\n", fracao_dos_negativos);
    printf("%.6lf\n", fracao_dos_zeros);


    return 0;
}