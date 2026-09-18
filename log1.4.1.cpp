#include <stdio.h>
#include <windows.h>
#include <stdlib.h> 
#include <time.h>   

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(NULL));

    int rows, cols;
    printf("Введите количество строк: ");
    scanf_s("%d", &rows);
    printf("Введите количество столбцов: ");
    scanf_s("%d", &cols);

    int** a = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        a[i] = (int*)malloc(cols * sizeof(int));
    }

    printf("\nСгенерированный массив %d x %d:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            a[i][j] = rand() % 100;
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }

    int diagSum = 0;
    int diagLength = (rows < cols) ? rows : cols; 

    for (int i = 0; i < diagLength; i++) {
        if (a[i][i] % 2 == 0) { 
            diagSum += a[i][i];
        }
    }

    printf("\nСумма четных чисел по главной диагонали: %d\n", diagSum);

    for (int i = 0; i < rows; i++) {
        free(a[i]);
    }
    free(a);

    return 0;
}


