#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Rus");

    int year;

  
    printf("Введите год: ");


    scanf("%d", &year);


    int remainder = year % 4;


 
    printf("\n---Год (число) не или високосный ---\n");
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
      
        printf("Год %d високосный\n", year);
    }
    else {
        printf("год %d не високосный\n", year);
    }

    return 0;
}