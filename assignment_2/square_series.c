#include <stdio.h>
#include <math.h>

int main() {
    int N;
    printf("Enter N to get square series value: ");
    scanf("%d", &N);
    int sum = 0;
    for (int i = 0; i <= N; ++i) {
        sum += pow(i, 2);
    }
    printf("Sum of square series: %d", sum);
};