#include <stdio.h>

int ispolnitel(int num) {
    int firstDigit = num / 100;
    int secondDigit = (num / 10) % 10;
    int thirdDigit = num % 10;

    int product1 = firstDigit * secondDigit;
    int product2 = secondDigit * thirdDigit;

    int result = product1 * 100 + product2;

    return result;
}

int main() {
    int number;
    printf("Введите трёхзначное число: ");
    scanf("%d", &number);

    int result = ispolnitel(number);

    printf("Результат работы исполнителя: %d\n", result);

    return 0;
}