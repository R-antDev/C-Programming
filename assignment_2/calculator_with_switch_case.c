#include <stdio.h>

int main() {
    int a, b;
    char op;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &op);
    switch (op) {
        case '+':
            printf("%d + %d = %d", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d", a, b, a * b);
            break;
        case '/':
            printf("%d / %d = %.2f", a, b, (float )a / (float)b);
            break;
        default:
            printf("Invalid operator");
    }
};