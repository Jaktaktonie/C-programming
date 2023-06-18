#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main() {
    int score = 0;
    char input;
    clock_t start, end;
    double duration;

    system("chcp 65001> nul");

    printf("Prosta gra w C\n");
    printf("Naciśnij klawisz 'a' 10 razy jak najszybciej.\n");
    printf("Naciśnij klawisz 'q', aby zakończyć grę.\n");

    while (score < 10) {
        input = getch();

        /* W linii kodu input = getch(); funkcja getch() zostaje wywołana, a jej wynik
        (wczytany znak z konsoli) przypisywany jest do zmiennej input.
        Oznacza to, że program będzie czekał, aż użytkownik naciśnie dowolny
        klawisz, a następnie wczyta ten klawisz i przypisze go do zmiennej input. */

        if (input == 'a') {
            score++;
            if (score == 1) {
                start = clock();
            }
            printf("Liczba naciśnięć: %d\n", score);
        }
        else if (input == 'q') {
            printf("Koniec gry. Nie udało się osiągnąć 10 naciśnięć.\n");
            return 0;
        }
    }

    end = clock();
    duration = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Udało się osiągnąć 10 naciśnięć!\n");
    printf("Czas trwania: %.2f sekundy\n", duration);

    printf("Czy chcesz zagrać jeszcze raz? (T/N): ");
    input = getch();

    if (input == 'T' || input == 't') {
        system("cls"); // Wyczyść konsolę (tylko na systemach Windows)
        main(); // Rozpocznij grę od nowa
    }
    else {
        printf("Dziękujemy za grę!\n");
    }

    return 0;
}
