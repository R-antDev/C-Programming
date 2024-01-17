#include <stdio.h>

int main() {
    int N;
    printf("Enter N to get factorial value: ");
    scanf("%d", &N);

    int factorial = 1;
    for (int i = 1; i <= N; i++) {
        factorial *= i;
    }
    printf("Factorial of %d is : %d", N , factorial);
};