#include <stdio.h>

int sumOfNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int result = sumOfNumbers(n);
        printf("The sum of numbers from 1 to %d is equal to %d\n", n, result);
    
    return 0;
}
