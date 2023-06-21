#include "myfun1.h"

/* definicja funkcji odległość */

double distance(double x1, double y1, double x2, double y2) {
    double x = x1-x2, y=y1-y2; // zmienne pomocnicze
    return sqrt(pow(x, 2.0) + pow(y,2.0));
}

/* deficja funkcji pole koła */


double area (int32_t r) {
    return M_PI*r*r; // konwersja typu!
}
