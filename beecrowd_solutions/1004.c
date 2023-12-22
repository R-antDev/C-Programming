//
// Created by emons on 23-Dec-23.
// Read two integer values.
// Calculate the product between them and store the result in a variable named PROD.


#include <stdio.h>

int main(){
    int n1, n2, PROD;
    scanf("%d %d", &n1, &n2);

    PROD = n1 * n2;
    printf("PROD = %d\n", PROD);

    return 0;
}
