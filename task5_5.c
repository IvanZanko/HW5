#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SIZE 1000

bool checkBrackets(char *str) {
    int count = 0;
    
    for (int i = 0; str[i] != '.'; i++) {
        if (str[i] == '(') {
            count++;
        }
        else if (str[i] == ')') {
            count--;
            if (count < 0) {
                return false; // скобки расставлены неверно
            }
        }
    }
    
    return count == 0; // если количество открывающих и закрывающих скобок совпадает, скобки расставлены верно
}

int main() {
    char str[MAX_SIZE];
    printf("Enter the string: ");
    scanf("%s", str);
    
    if (checkBrackets(str)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    
    return 0;
}
