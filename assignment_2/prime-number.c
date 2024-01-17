#include <stdio.h>

int main() {
    int N;
    printf("Enter N to check if it is prime: ");
    scanf("%d", &N);

    if (N == 1) {
        printf("%d is not a prime number.\n", N);
    } else {
        int i;
        for (i = 2; i < N; i++) {
            if (N % i == 0) {
                printf("%d is not a prime number.\n", N);
                break;
            }
        }
        if (i == N) {
            printf("%d is a prime number.\n", N);
        }
    }

};