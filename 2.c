#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* join(char* words[], int n) {
    // Выделяем память под итоговую строку
    char* result = (char*)malloc(255 * sizeof(char));
    if (result == NULL) {
        fprintf(stderr, "Ошибка выделения памяти.\n");
        return NULL;
    }

    // Инициализируем итоговую строку пустым символом
    result[0] = '\0';

    // Объединяем строки в итоговую строку, разделяя их пробелами
    int i;
    for (i = 0; i < n; i++) {
        strcat(result, words[i]);
        strcat(result, " ");
    }

    // Удаляем последний лишний пробел
    result[strlen(result) - 1] = '\0';

    return result;
}

int main() {
    char* words[] = {"Hello", "world!", "This", "is", "a", "test."};
    int n = sizeof(words) / sizeof(words[0]);

    char* result = join(words, n);
    if (result != NULL) {
        printf("Результат: %s\n", result);
        free(result); // Не забываем освободить память после использования
    }

    return 0;
}