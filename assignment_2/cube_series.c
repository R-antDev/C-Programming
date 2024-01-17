#include <stdio.h>
#include <math.h>

int main() {
    int N;
    printf("Enter N to get cube series value: ");
    scanf("%d", &N);
    int sum = 0;
    for (int i = 0; i <= N; ++i) {
        sum += pow(i, 3);
    }
    printf("Sum of cube series: %d", sum);
};
