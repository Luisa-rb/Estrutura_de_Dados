#include <stdio.h>
#include <math.h>

int main() {

    int tamanhoDados, bytesTranferidos, totalDadosTranferidos, tempo;
    double segundosRestantes, totalAgora, dadosPorSegundo;
    char letra;

    scanf("%d", &tamanhoDados);
    tempo = 0;
    totalAgora = 0;
    totalDadosTranferidos = 0;
    printf("Data size of %d bytes:\n", tamanhoDados);

    while (tamanhoDados > 0) {

        scanf("%d", &bytesTranferidos);
        tempo++;

        totalDadosTranferidos += bytesTranferidos;
        totalAgora += bytesTranferidos;
        tamanhoDados -= bytesTranferidos;

        if(tempo % 5 == 0 && tempo != 0) {

            if (totalAgora == 0) {

                printf("Time remaining: stalled\n");

            } else {

                dadosPorSegundo = totalAgora/5;
                segundosRestantes = ceil((tamanhoDados)/ dadosPorSegundo);

                printf("Time remaining: %.0lf seconds\n", segundosRestantes);
                totalAgora = 0;

            }

        }

    }


    scanf(" %c", &letra);
    printf("Total time: %d seconds\n", tempo);

    return 0;
}