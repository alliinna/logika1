#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <windows.h>

int main(void) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int max = -10 * 100;
    int min = 10 * 100;
    int n = 10, i = 0;
    int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    while (i < n) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
        i++;
    }


    printf("Массив: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Максимальный элемент: %d\n", max);
    printf("Минимальный элемент: %d\n", min);
    printf("Разница между максимальным и минимальным: %d\n", max - min);

    return 0;
}