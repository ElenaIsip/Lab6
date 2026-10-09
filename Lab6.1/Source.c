#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Russian");

    
    double x, F;

    
    printf("¬ведите значение x: ");
    scanf("%lf", &x);

    
    printf("F(%.2lf) = %lf\n", x,
        (x <= 7) ? (3 * x - 9) : (1.0 / (x * x - 4)));

    return 0;
}