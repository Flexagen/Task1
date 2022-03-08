#include <stdio.h>
#include <math.h>
#include "equation.h"

int equation (double *a, double *b, double *c, double *d, double *x1, double *x2) {


    if (*d > 0 && *a != 0 && *b != 0) {
        *x1 = ((-*b) + sqrt(*d)) / (2 * *a);
        *x2 = ((-*b) - sqrt(*d)) / (2 * *a);
        return 1;
    }

    if (d == 0 && *a != 0 && *b != 0) {
        *x1 = -(*b / (2 * *a));
        return 0;
    }

    if (*d < 0) {
        return -1;
    }

    if (*a == 0) {
      *x1 = - *c / *b;
      return 0;
    }

    if (*b == 0) {
      *x1 = sqrt(- *c);
      *x2 = -sqrt(- *c);
      return 0;
    }

    return -1;
}
