#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(int argc, char* argv[])
{
    system("chcp 65001> nul");
    char name[21];
    int age,length;
    time_t rawtime;

    printf("Podaj imie:\n");
    gets(name);
    printf("Podaj wiek:\n");
    scanf ("%d",&age);
    printf ("\nWitaj %s, lat %d\n",name,age);

    time(&rawtime);
    printf("Data/czas: %s\n", ctime(&rawtime));

    length = strlen(name);
    printf("Podane imię składa się z %d znaków\n",length);

    return 0;
 }