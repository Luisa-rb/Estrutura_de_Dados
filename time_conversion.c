#include <stdio.h>
#include <string.h>

int main (){

    int horas, minutos, segundos;
    char periodo_do_dia[3];

    scanf("%d : %d : %d%s", &horas, &minutos, &segundos, periodo_do_dia);
    getchar();

    if(horas < 12 && strcmp(periodo_do_dia, "PM") == 0) {

        horas += 12;

    } else if (horas == 12 && strcmp(periodo_do_dia, "AM") == 0) {

        horas = 0;
        
    }

    printf("%.2d:%.2d:%.2d\n", horas, minutos, segundos);


    return 0;
}