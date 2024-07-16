#include <stdio.h>
#include <stdlib.h>

int main() {
    // Uncomment the line below if you need to set the code page to UTF-8 for Windows console.
    // system("chcp 65001");

    int a, b, suma;
    printf("Początkowe wartości: a = %d, b = %d\n", a, b); // Wypisanie początkowych wartości
    suma = a + b;

    printf("Wpisz pierwszą liczbę:\n");
    scanf("%d", &a);
    printf("Wpisz drugą liczbę:\n");
    scanf("%d", &b);

    printf("Wynik dodawania = %d\n", suma);

    return 0;
}