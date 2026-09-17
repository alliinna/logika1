#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	int* a;

	printf("Введите размер будущего массива: ");
	scanf_s("%d", &n);

	if (n <= 0) {
		printf("Размер массива должен быть положительным!");
		return 1;
	}
	a = (int*)malloc(n * sizeof(int));

	if (a == NULL) {
		printf("Недостаточно памяти");
		return 1;
	}

	printf("Введите %d элемнтов массива\n", n);
	for (int i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	free(a);
	return 0;
}

