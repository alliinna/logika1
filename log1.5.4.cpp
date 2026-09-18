#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>

struct Student {
    char famil[20];
    char name[20];
    char facult[20];
    int Nomzach;
};

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    struct Student stud[3];
    char search[20];
    int found = 0;

    printf("=== ВВОД ДАННЫХ СТУДЕНТОВ ===\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\nСтудент %d:\n", i + 1);

        int isDuplicate;
        do {
            isDuplicate = 0;

            printf("Введите фамилию: ");
            scanf("%19s", stud[i].famil);

            for (int j = 0; j < i; j++) {
                if (strcmp(stud[j].famil, stud[i].famil) == 0) {
                    printf("Ошибка: Студент с фамилией '%s' уже есть.\n", stud[i].famil);
                    isDuplicate = 1;
                    break;
                }
            }
        } while (isDuplicate);

        printf("Введите имя: ");
        scanf("%19s", stud[i].name);
        printf("Введите факультет: ");
        scanf("%19s", stud[i].facult);
        printf("Введите номер зачётной книжки: ");
        scanf("%d", &stud[i].Nomzach);

        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\nВведите фамилию для поиска: ");
    scanf("%19s", search);

    printf("\n=== РЕЗУЛЬТАТЫ ПОИСКА ===\n");
    for (int i = 0; i < 3; i++)
    {
        if (strstr(stud[i].famil, search) != NULL)
        {
            printf("\nНайден студент:\n");
            printf("Фамилия: %s\n", stud[i].famil);
            printf("Имя: %s\n", stud[i].name);
            printf("Факультет: %s\n", stud[i].facult);
            printf("Номер зачётной книжки: %d\n", stud[i].Nomzach);
            found = 1;
        }
    }

    if (!found)
    {
        printf("Студент с  фамилией '%s' не найден.\n", search);
    }

    return 0;
}
