#include <stdio.h>
#include <stdlib.h>


int main() {
    int num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (operator == '+') {
        printf("Result: %d\n", num1 + num2);
    }
    else if (operator == '-') {
        printf("Result: %d\n", num1 - num2);
    }
    else if (operator == '*') {
        printf("Result: %d\n", num1 * num2);
    }
    else if (operator == '/') {
        if (num2 != 0) {
            printf("Result: %d\n", num1 / num2);
        } else {
            printf("Error: Division by zero not allowed\n");
        }
    }
    else {
        printf("Invalid operator\n");
    }


    return 0;
}

