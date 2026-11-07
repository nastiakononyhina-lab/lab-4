#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    printf("Введите целое трехзначное число");
    int n;
    scanf("%d", &n);
    int last = n % 10;
    int first = n / 100;
    int middle = (n / 10) % 10;
    int sum = first + middle + last;
    int reversed = last * 100 + middle * 10 + first;
    printf("Последняя цифра: %d\n", last);
    printf("Первая:%d\n", first);
    printf("Сумма:%d\n", sum);
    printf("Наоборот:%d\n\n", reversed);
}