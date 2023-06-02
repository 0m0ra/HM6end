#include <stdio.h>

int sumDigits(int *num) {
    int number = *num;
    int sum = 0;

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    return sum;
}

int main() {
    int number;
    printf("Введите число: ");
    scanf("%d", &number);

    int sum = sumDigits(&number);

    printf("Сумма цифр числа: %d\n", sum);

    return 0;
}