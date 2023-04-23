#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    system("chcp 65001> nul");

    double a, h, pole;


    printf("Podaj długość boku trójkąta w cm:\n");
    scanf("%lf",&a);
    printf("Wprowadzona wartość to %.1f cm\n",a);

    printf("Podaj wysokość trójkąta w cm:\n");
    scanf("%lf",&h);
    printf("Wprowadzona wartość to %.1f cm\n\n",h);


    pole=0.5*a*h;

    printf ("Pole trójkąta wynosi: %.3g cm\n",pole);

    return 0;
}