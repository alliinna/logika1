#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <windows.h>

void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 

    int a[10];
    int n = 10;

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
    }

    printf("Массив из %d элементов: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

