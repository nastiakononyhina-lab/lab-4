#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    printf("Задание 2:\n");
    int a = 11;
    int b = 3;

    int x;
    float y;
    double z;
    x = a / b;
    y = a / b;
    z = a / b;
    printf("x (целое число) = %d\n", x);
    printf("y(дробное float)=%f\n", y);
    printf("z(дробное double) = % lf\n", z);
    printf("Пояснение: результат 3.0 т.к. числа целые , дробная часть отбрасывается\n");
    //принудительное преобразование
    printf("Явное преобразование:\n");
    printf("float:%f\n", (float)a / b);
    printf("double:%lf\n", (double)a / b);
    printf("Скобки во круг всей дроби(float)(a/b):%f\n\n", (float)(a / b));
}