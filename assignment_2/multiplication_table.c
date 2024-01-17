#include <stdio.h>

int main() {
    int N;
    printf("Enter N to get multiplication table: ");
    scanf("%d", &N);

    int multiplication = 0;
    for (int i = 1; i <= 10; i++) {
        multiplication = i * N;
        printf("%d * %d = %d\n", N, i, multiplication);
    }

};