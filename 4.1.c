#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    printf("Задание 1:\n");
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;
    printf("Исходное значение:\n");
    printf("Символ c= %c\n", c);
    printf("Целое i = %d\n", i);
    printf("Дробное d= %le\n\n", d);
    printf("Введите значения переменных(символ, целое, дробное, дробное):\n");
    scanf("%c %d %f %lf", &c, &i, &f, &d);
    printf("Вы ввели:\n");
    printf("Символ: %c, Целое:%d, Дробное: %f, Дробное: %le\n\n", c, i, f, d);

    printf("Задание 1a,b,c:\n");
    float real_num; //переменная для вещественного числа
    printf("Введите вещественное число(для задачи 1a):");
    scanf("%f", &real_num);
    int int_part = (int)real_num; //отбрасываем целую, получаем дробную
    float frac_part = real_num - int_part; //вычитаем целую, получаем дробную
    printf("Целая часть:%d, Дробная часть:%f\n", int_part, frac_part);

    char symbol;
    printf("Введите символ(для задачи 1b):");
    scanf(" %c", &symbol); //пробел перед c чтобы пропустить символ
    printf("Символ '%c': 16-ричной = %x, 10-ричной = %d\n\n", symbol, symbol, symbol);

    int divisor;
    printf("Введите целое число i (для задачи 1c):");
    scanf("%d", &divisor);
    printf("Значения 1/%d =%f\n\n", divisor, 1.0 / divisor);
}