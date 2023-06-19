#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    int a, b, wynik1;
    double x, y, wynik2;
    system("chcp 1250 > nul"); // strona kodowa Windows 1250
    puts("Operacje arytmetyczne na liczbach typu 'int'");
    fflush(stdin); // usuń znaki z bufora klawiatury
    printf("a= ");
    scanf("%d", &a); // uwaga na operator &
    printf("b= ");
    scanf("%d", &b);
    wynik1 = a + b;
    printf("%d + %d = %d\n", a, b, wynik1);
    wynik1 = a - b;
    printf("%d - %d = %d\n", a, b, wynik1);
    wynik1 = a * b;
    printf("%d * %d = %d\n", a, b, wynik1);
    if (b != 0)
    { // warunek popr. wykonania operacji
        wynik1 = a / b;
        printf("%d / %d = %d\n", a, b, wynik1);
        wynik1 = a % b;
        printf("%d %c %d = %d\n", a, '%', b, wynik1); //uwaga
    }
    puts("\nOperacje arytmetyczne na liczbach typu 'double'");
    fflush(stdin); // usuń znaki z bufora klawiatury
    printf("x= ");
    scanf("%lf", &x);
    printf("y= ");
    scanf("%lf", &y);
    wynik2 = x + y;
    printf("%.2lf + %.2lf = %.2lf\n", x, y, wynik2);
    wynik2 = x - y;
    printf("%.2lf - %.2lf = %.2lf\n", x, y, wynik2);
    wynik2 = x * y;
    printf("%.2lf * %.2lf = %.2lf\n", x, y, wynik2);
    if (y != 0.0)
    { // warunek popr. wykonania operacji
        wynik2 = x / y;
        printf("%.2lf / %.2lf = %.2f\n", x, y, wynik2);
    }
    system("pause");
    return 0;
}