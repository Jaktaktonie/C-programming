#include <stdio.h>

int main() {
    int n, k;
    int nFactorial = 1;
    int kFactorial = 1;
    int result;

    printf("Podaj liczbę n: ");
    scanf("%d", &n);

    printf("Podaj liczbę k: ");
    scanf("%d", &k);

    // Obliczanie n!
    for (int i = 1; i <= n; i++) {
        nFactorial *= i;
    }

    // Obliczanie k!
    for (int i = 1; i <= k; i++) {
        kFactorial *= i;
    }

    result = nFactorial / kFactorial;

    printf("Wynik to %d\n", result);

    return 0;
}