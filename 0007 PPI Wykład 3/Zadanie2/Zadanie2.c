#include <stdio.h>
#include <stdlib.h>
#define USE_MATH_DEFINES
#include <math.h> /* funkcje biblioteki matematycznej */


int main(int argc, char* argv[])
{
    system("chcp 1250 > nul");

    puts("Wybrane funkcje biblioteki matematycznej\n");

    /*
funkcje matemtyczne domyślenie wyświetlają wartość jako double więc nie ma powodu aby specjalnie deklarowoać
*/
    printf("sqrt(100.0) to %.2f\n", sqrt(100.0));           //pierwiastek kwadratowy (square root)
    printf("cbrt(27.0) to %.2f\n", cbrt(27.0));                 //pierwiastek sześcienny (cube root)
    printf("exp(1.0) to %f\n", exp(1.0));                    //do obliczenia wartości wykładniczej e^x, gdzie x = 1.0.
    printf("log(2.718282) to %.2f\n", log(2.718282));      //do obliczenia logarytmu naturalnego z liczby 2.718282 (wartość bliska liczbie e). Wynik zostaje wypisany na ekranie z dwoma miejscami po przecinku.
    printf("log10(100.0) to %.2f\n", log10(100.0));         //do obliczenia logarytmu dziesiętnego z liczby 100.0.
    printf("fabs(-2.5) to %.2f\n", fabs(-2.5));             //do obliczenia wartości bezwzględnej liczby -2.5.
    printf("ceil(9.3) to %.2f\n", ceil(9.3));               //do zaokrąglenia liczby 9.3 w górę (do najbliższej większej liczby całkowitej).
    printf("ceil(-9.3) to %.2f\n", ceil(-9.3));             //to samo ale liczba ujemna
    printf("floor(9.3) to %.2f\n", floor(9.3));             // do zaokrąglenia liczby 9.3 w dół (do najbliższej mniejszej liczby całk
    printf("floor(-9.3) to %.2f\n", floor(-9.3));           //to samo ale liczba ujemna
    printf("pow(2, 10) to %.2f\n", pow(2, 10));             //potęga liczby 2^10
    printf("fmod(13.657, 2.333) to %.3f\n", fmod(13.657, 2.333));       //modulo czyli reszta z dzielenia
    printf("sin(0.0) to %.2f\n", sin(0.0));                 //sinus kąta zerowego - 0
    printf("sin(PI/2) to %.2f\n", sin(M_PI_2)); // stała pi/2
    printf("cos(0.0) to %.2f\n", cos(0.0));
    printf("cos(PI/2) to %.2f\n", cos(M_PI_2)); // stała pi/2
    printf("tan(0.0) %.2f\n", tan(0.0));
    printf("tan(PI/4) %.2f\n", tan(M_PI_4)); // stała pi/4
    printf("tan(PI/4) %lf\n\n", tan(M_PI_2)); // stała pi/2

    system("pause");

    return 0;
}