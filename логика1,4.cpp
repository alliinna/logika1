#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int rows = 3, cols = 5;
	int a[3][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};

	printf("Двумерный массив %d x %d:\n", rows, cols);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
		printf("%4d ", a[i][j]);
		}
	printf("\n");
	}

	printf("\nСумма по столбцам:\n");
	for (int j = 0; j < cols; j++) {
		int sum = 0;
		for (int i = 0; i < rows; i++) {
		sum += a[i][j];
		}
	printf("Столбец %d:  %d\n", j + 1, sum);
	}

return 0;
}

