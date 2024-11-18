#include <stdio.h>
#include <string.h>
#define max 100

void OrganizarEmOrdemCrescente (char str[max], int tamanhoStr) {

    char aux;

    if (tamanhoStr == 1) {
        return;
    }

    for (int i = 0; i < tamanhoStr; i++) {
        for (int j = i + 2; j < tamanhoStr; j++) {

            if (str[j] < str[i] && str[i] != '+' && str[j] != '+') {

                aux = str[i];
                str[i] = str[j];
                str[j] = aux;

            }

        }
     }

}

int main () {

    int tamanhoStr;
    char str[max];

    scanf("%s", str);

    tamanhoStr = strlen(str);

    OrganizarEmOrdemCrescente(str, tamanhoStr);

    printf("%s\n", str);

    return 0;
}