#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Russian");

    double x, y;

    printf("Введите координаты точки (x y): ");
    if (scanf("%lf %lf", &x, &y) != 2) {
        printf("Ошибка: неверный формат ввода!\n");
        return 1;
    }

    
    if (x >= 0 && (x * x + y * y) <= 9.0) {
        printf("\nТочка (%.2lf; %.2lf) принадлежит области.\n", x, y);
    }
    else {
        printf("\nТочка (%.2lf; %.2lf) НЕ принадлежит области.\n", x, y);
    }

    return 0;
}