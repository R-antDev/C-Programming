//
// Created by emons on 23-Dec-23.
// Read two integer values, in this case, the variables A and B. After this,
// calculate the sum between them and assign it to the variable SOMA.
// Write the value of this variable.

#include <stdio.h>

int main() {

    int A, B, SOMA;
    scanf("%d %d", &A, &B);

    SOMA = A + B;
    printf("SOMA = %d\n", SOMA);

    return 0;
}