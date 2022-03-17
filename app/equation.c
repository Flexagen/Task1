#include <stdio.h>
#include <math.h>
#include "equation.h"

int equation (double a, double b, double c, double *x1, double *x2) {
    double d = b * b - 4 * a * c;

    if (d > 0.0 && a != 0.0 && b != 0.0) {
        if (c == 0) {
            *x1 = 0.0;
            *x2 = -b / a;
        }
        else {
            *x1 = ((-b) + sqrt(d)) / (2 * a);
            *x2 = ((-b) - sqrt(d)) / (2 * a);
        }
        return 1;
    }

    if (d == 0.0 && a != 0.0 && b != 0.0) {
        *x1 = -(b / (2 * a));
        return 0;
    }

    if (a == 0.0 && b != 0.0) {
      *x1 = -c / b;
      return 0;
    }

    if (b == 0.0 && a != 0.0) {
        if (-c > 0) {
            *x1 = sqrt(-c /a);
            *x2 = -sqrt(-c /a);
            return 1;
         }
        if (-c == 0.0) {
            *x1 = 0;
            return 0;
        }
        return -1;
    }

    if (a == 0.0 && b == 0.0 && c == 0.0) {
        return -2;
    }

    if (d < 0) {
        return -1;
    }

    return -1;
}
