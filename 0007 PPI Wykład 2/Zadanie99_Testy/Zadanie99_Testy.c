#include <stdio.h>
#include <stdlib.h>

// zmienić na do - while w pętli (dół)

int main(int argc, char *argv[]) {

    system("chcp 65001> nul");

    int x;
    printf("Zgadnij liczbę\n1");
    scanf("%d",&x);

    if (x==6) {
        printf("Poprawna liczba");
    };


return 0;
}

/*
 * #include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001> nul");

    int x;
    printf("Zgadnij liczbę (wpisz 6 aby zakończyć): ");

    do {
        scanf("%d", &x);

        if (x == 6) {
            printf("Poprawna liczba\n");
            break;  // Wyskocz z pętli, gdy użytkownik poda 6
        }
        else {
            printf("Niepoprawna liczba. Spróbuj ponownie (lub wpisz 6 aby zakończyć): ");
        }
    } while (1);

    return 0;
}
 */