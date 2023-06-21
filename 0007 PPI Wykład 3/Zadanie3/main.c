/*Napisać program z funkcjami, który obliczy:
a) pole koła, wczytać r – promień, typ int32_t
b) odległość dwóch punktów na płaszczyźnie, wczytać x1,y1, x2, y2 – współrzędne punktów, typ double*/

#include <stdio.h>
#include <stdlib.h>
#include "myfun1.h"

int main(int argc, char* argv[])
{
    int32_t r; // promień r – przenośny integer
    double x1,y1,x2,y2;
    system("chcp 1250 > nul");
    printf("Podaj promień r: ");
    scanf("%ud",&r);

    if (r < 0){
        puts("Niepoprawne dane!\n");
        system("pause");
        exit(EXIT_FAILURE);
    }
    printf("\nPodaj współrzędne punktu (x1,y1): ");
    scanf("%lf%lf", &x1,&y1);
    printf("\nPodaj współrzędne punktu (x2,y2): ");
    scanf("%lf%lf", &x2,&y2);
    printf("\nPole koła o promieniu r: %ud wynosi: %.3lf\n\n", r, area(r));
    printf("\nOdległość między punktami: (%.2lf, %.2lf) (%.2lf, %.2lf) wynosi: %.3f\n\n",
           x1,y1,x2,y2, distance(x1,y1,x2,y2) );
    system("pause");
    return 0;
}
