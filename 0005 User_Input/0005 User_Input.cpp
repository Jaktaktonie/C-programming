//
// Created by andrz on 17.06.2023. - learning byW3Schools
//
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {

    system("chcp 65001> nul");

    int myNum;
    char myChar;

    printf("Wpisz numer i literę a następnie naciśnij enter:\n");
    scanf ("%d", &myNum);
    scanf (" %c", &myChar);

    printf("Twój numer to: %d\n", myNum);
    printf("Twoja litera to: %c\n", myChar);


    char firstName[15];
    printf("Podaj swoje imię:\n");
    scanf (" %s", &firstName);
    printf("Witaj %s\n", firstName );

    //fgets() function to read a line of text, must include the following arguments: the name of the string variable, sizeof(string_name), and stdin:

    while (getchar() != '\n'); // czyścimy bufor wejściowy

    char fullName[30];

    printf("Podaj swoje imię i nazwisko:\n");
    fgets (fullName, sizeof(fullName),stdin);
    printf("Witaj %s", fullName );


    return 0;
}

//Use the scanf() function to get a single word as input, and use fgets() for multiple words.