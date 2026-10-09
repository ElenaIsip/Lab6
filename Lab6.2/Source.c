#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int day, month, year, choice;

    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    
    printf("¬ведите дату (день мес€ц год): ");
    if (scanf("%d %d %d", &day, &month, &year) != 3) {
        printf("ќшибка: неверный формат ввода!\n");
        return 1;
    }

   
    if (month < 1 || month > 12) {
        printf("ќшибка: мес€ц должен быть от 1 до 12!\n");
        return 1;
    }

  
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        days[1] = 29;
    }

   
    if (day < 1 || day > days[month - 1]) {
        printf("ќшибка: в мес€це %d всего %d дней!\n", month, days[month - 1]);
        return 1;
    }

   
    printf("\n„то вычислить?\n");
    printf("  1 - дней до конца мес€ца\n");
    printf("  2 - дней до конца года\n");
    printf("¬аш выбор: ");
    if (scanf("%d", &choice) != 1) {
        printf("ќшибка: неверный формат ввода!\n");
        return 1;
    }

    
    int result = days[month - 1] - day;   

    if (choice == 2) {
        for (int m = month; m < 12; m++) {
            result += days[m];
        }
        printf("\nƒо конца года осталось: %d дн.\n", result);
    }
    else if (choice == 1) {
        printf("\nƒо конца мес€ца осталось: %d дн.\n", result);
    }
    else {
        printf("\nќшибка: выбор должен быть 1 или 2!\n");
        return 1;
    }

    return 0;
}