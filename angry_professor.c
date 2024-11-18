#include <stdio.h>
#define max 1000

int main () {

    int numeroEstudantes, qtdNeccassariaDeAlunos, horarioDeChegada[max];
    int casosTeste, AlunosNoHorario = 0;

    scanf("%d", &casosTeste);

    for (int i = 0; i < casosTeste; i++) {

        scanf("%d %d", &numeroEstudantes, &qtdNeccassariaDeAlunos);

        for (int j = 0; j < numeroEstudantes; j++) {
            scanf("%d", &horarioDeChegada[j]);

            if (horarioDeChegada[j] <= 0) {
                AlunosNoHorario++;
            }
        }


        if (AlunosNoHorario >= qtdNeccassariaDeAlunos) {
            printf ("NO\n");
        } else {
            printf ("YES\n");
        }

        AlunosNoHorario = 0;

    }

    return 0;
}