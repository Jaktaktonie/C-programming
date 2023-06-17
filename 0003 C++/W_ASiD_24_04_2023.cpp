// Lista jednokierunkowa Andrzej Czabajski

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

typedef struct  typ_danych {
    int nr;
    char nazwa [10];

};

typedef struct Element_listy

{typ_danych dane;
    struct Element_listy *nast;


};
