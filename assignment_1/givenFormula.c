//
// Solve : AB + C^2 + 2D
//

#include <stdio.h>
#include <math.h>

int main(void){
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    int solve = A * B + pow(C, 2) * (2 * D);
    printf("Solution is: %d", solve);

}