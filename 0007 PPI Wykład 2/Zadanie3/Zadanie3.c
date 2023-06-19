#include <stdio.h>
#include <stdlib.h>

int suma(int a, int b) // definicja funkcji 'suma'
{
    return a + b;
}
int roznica(int a, int b) // definicja funkcji 'roznica'
{
    return a - b;
}
int iloczyn(int a, int b) // definicja funkcji 'iloczyn'
{
    return a * b;
}
int main(int argc, char *argv[])
{
    int a, b;
    system("chcp 1250 > nul");

    puts("Operacje arytmetyczne na liczbach całkowitych z wykorzystaniem funkcji");
    fflush(stdin); // uwaga
    printf("\nPodaj dwie liczby oddzielone spacją: ");
    scanf("%d%d", &a, &b); // uwaga
    printf("%d + %d = %d\n", a, b, suma(a, b));
    printf("%d - %d = %d\n", a, b, roznica(a, b));
    printf("%d * %d = %d\n", a, b, iloczyn(a, b));
    printf("\nPodaj dwie liczby oddzielone spacją: ");
    scanf("%d%d", &a, &b); // uwaga
    printf("%d + %d = %d\n", a, b, suma(a, b));
    printf("%d - %d = %d\n", a, b, roznica(a, b));
    printf("%d * %d = %d\n", a, b, iloczyn(a, b));
    system("pause");
    return 0;
}