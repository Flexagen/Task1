#include <stdio.h>
#include "equation.h"

int main() {
    double x1, x2;
    x1 = 0;
    x2 = 0;

    int rezult = equation(01762, 0, 0, &x1, &x2);

    if (rezult == 1)
        printf("x1 = %lf; x2 = %lf\n", x1, x2);

    if (rezult == 0)
        printf("x1 = x2 = %lf\n", x1);

    if (rezult == -1)
        printf("Корней не существует.\n");

    if (rezult == -2)
        printf("X - любое число.\n");
}
