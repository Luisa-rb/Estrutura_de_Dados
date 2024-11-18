#include <stdio.h>

int Fatorial(int n) {

    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n*Fatorial(n - 1);
    }

}

int main () {

    int n, fatorial;

    scanf("%d", &n);

    fatorial = Fatorial(n);

    printf("%d\n", fatorial);
}
    