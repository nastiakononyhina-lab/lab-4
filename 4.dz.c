#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    int a, b;
    printf("Введите код сканера a:");
    scanf("%d", &a);
    printf("Введите код сканера b:");
    scanf("%d", &b);
    int count = (a % 2) + (b % 2);
    int open = (count == 1);
    printf("Результат (1- открыть, 0-закрыть):%d\n", open);
    return 0;
}