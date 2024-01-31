#include <stdio.h>

// Функция для вычисления НОД
int gcd(int a, int b) {
    // НОД равен b, если a равно 0
    if (a == 0)
        return b;

    // Рекурсивно вычисляем НОД(b % a, a)
    return gcd(b % a, a);
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int result = gcd(num1, num2);

    printf("%d\n", result);

    return 0;
}
