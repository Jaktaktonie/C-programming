#include <stdio.h>

int main() {
    int a, r, n, sum;

    system("chcp 65001> nul");

    printf("Podaj pierwszy wyraz ciągu: \n");
    scanf("%d", &a);

    printf("Podaj różnicę ciągu: ");
    scanf("%d", &r);

    printf("Podaj liczbę wyrazów ciągu: ");
    scanf("%d", &n);

    sum = (2 * a + (n - 1) * r) * n / 2;

    printf("Suma %d wyrazów ciągu wynosi %d\n", n, sum);

    return 0;
}