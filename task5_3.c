#include <stdio.h>

// Функция для определения суммы цифр числа
int getDigitSum(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

// Функция для определения произведения цифр числа
int getDigitProduct(int number) {
    int product = 1;
    while (number != 0) {
        product *= number % 10;
        number /= 10;
    }
    return product;
}

int main(void) {
    int number;
    scanf("%d", &number);

    int digitSum = getDigitSum(number);
    int digitProduct = getDigitProduct(number);

    if (digitSum == digitProduct) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
