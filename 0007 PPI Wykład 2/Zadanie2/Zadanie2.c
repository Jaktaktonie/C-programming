#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    int a, b, sum1;
    double x, y, sum2;
    system("chcp 1250 > nul"); // strona kodowa Windows 1250
    puts("Operacje arytmetyczne na liczbach typu 'int'");
    fflush(stdin); // usuń znaki z bufora klawiatury
    printf("a= ");
    scanf("%d", &a); // uwaga na operator &
    printf("b= ");
    scanf("%d", &b);
    sum1 = a + b;
    printf("%d + %d = %d\n", a, b, sum1);
    sum1 = a - b;
    printf("%d - %d = %d\n", a, b, sum1);
    sum1 = a * b;
    printf("%d * %d = %d\n", a, b, sum1);
    if (b != 0)
    { // warunek popr. wykonania operacji
        sum1 = a / b;
        printf("%d / %d = %d\n", a, b, sum1);
        sum1 = a % b;
        printf("%d %c %d = %d\n", a, '%', b, sum1); //uwaga
    }
    puts("\nOperacje arytmetyczne na liczbach typu 'double'");
    fflush(stdin); // usuń znaki z bufora klawiatury
    printf("x= ");
    scanf("%lf", &x);
    printf("y= ");
    scanf("%lf", &y);
    sum2 = x + y;
    printf("%.2lf + %.2lf = %.2lf\n", x, y, sum2);
    sum2 = x - y;
    printf("%.2lf - %.2lf = %.2lf\n", x, y, sum2);
    sum2 = x * y;
    printf("%.2lf * %.2lf = %.2lf\n", x, y, sum2);
    if (y != 0.0)
    { // warunek popr. wykonania operacji
        sum2 = x / y;
        printf("%.2lf / %.2lf = %.2f\n", x, y, sum2);
    }
    if (y=5.0)
    {
        sum2 = x * x * y;
           printf("%.2lf * %.2lf * %2.lf = %.2lf\n", x,x,y,sum2);
    }
    system("pause");
    return 0;
}