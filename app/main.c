#include <stdio.h>
#include "equation.h"

int main()
{
    double a, b, c, d, x1, x2;
    x1 = 0;
    x2 = 0;
    a = 1;
    b = 0;
    c = -100;
    d = b * b - 4 * a * c;

    int rezult = equation(&a, &b, &c, &d,  &x1, &x2);
    if (rezult == 1)
        printf("x1 = %lf; x2 = %lf\n", x1, x2);
    if (rezult == 0)
        printf("x1 = x2 = %lf\n", x1);
    if (rezult == -1)
        printf("Корней не существует.");
    return 0;
}
