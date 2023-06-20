#include <stdio.h>
#include <stdlib.h>
#include <limits.h> /* deklaracje stałych typów całkowitych */
#include <float.h> /* deklaracje stałych typów rzeczywistych */

int main(int argc, char* argv[])
{
    system("chcp 65001 > nul");

    puts("Rozmiary (w bajtach) typów całkowitych, C17, x64)");

    printf("char\t\t%d\n", sizeof(char));
    printf("short\t\t%d\n", sizeof(short));
    printf("int\t\t%d\n", sizeof(int));
    printf("unsigned int\t%d\n", sizeof(unsigned int));
    printf("long\t\t%d\n", sizeof(long));
    printf("long long\t%d\n", sizeof(long long));
    printf("unsigned long long\t%d\n\n", sizeof(unsigned long long));

    system("pause");

    puts("\nZakresy wybranych typów całkowitych, C17, x64)");
    puts("\nuwaga na specyfikatory formatu!\n");

    printf("short int\t%hd\t%hd\n", SHRT_MIN, SHRT_MAX); // "%hd"
    printf("unsigned short int\t%hu\t%hu\n", 0, USHRT_MAX); // "%hu"
    printf("int\t\t%d\t%d\n", INT_MIN, INT_MAX); // "%d"
    printf("unsigned int\t%d\t%u\n", 0, UINT_MAX); // "%u"
    printf("long int\t%ld\t%ld\n", LONG_MIN, LONG_MAX); // "%ld"
    printf("unsigned long int\t%lu\t%lu\n", 0, ULONG_MAX); // "%lu"
    printf("long long int\t%lld\t%lld\n", LLONG_MIN, LLONG_MAX); // "%lld"
    printf("unsigned long long int\t%llu\t%llu\n\n", 0, ULLONG_MAX); // "%llu"

    system("pause");

    puts("\nRozmiary (w bajtach) typów rzeczywistych, C17, x64)");

    printf("float\t\t%d\n", sizeof(float));
    printf("double\t\t%d\n", sizeof(double));
    printf("long double\t%d\n\n", sizeof(long double));

    system("pause");

    puts("\nCharakterystyka typu float, C17, x64");

    printf("min\t\t%e\n", FLT_MIN); // "%e"
    printf("max\t\t%e\n", FLT_MAX); // "%e"
    printf("precyzja(10)\t%d\n", FLT_DIG);

    system("pause");

    puts("\nCharakterystyka typu double, C17, x64");

    printf("min\t\t%e\n", DBL_MIN); // "%e"
    printf("max\t\t%e\n", DBL_MAX); // "%e"
    printf("precyzja(10)\t%d\n", DBL_DIG);

    puts("\nTyp long double, C17, x64\n");

    printf(" - implementacja własna\n");
    printf("Docelowo: 3.4E-4932 - 1.1E+4932\n");

    system("pause");

    return 0;
}