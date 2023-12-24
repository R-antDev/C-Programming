//
// Created by emons on 24-Dec-23.
// In this problem, the task is to read a code of a product 1, the number of units of product 1,
// the price for one unit of product 1, the code of a product 2, the number of units of product 2
// and the price for one unit of product 2.
// After this, calculate and show the amount to be paid.


#include <stdio.h>

int main() {

    int productCode1 , unitsProducts1 , productCode2 , unitsProducts2 ;
    float priceProduct1, priceProduct2, totalPrice;

    scanf("%d %d %f", &productCode1, &unitsProducts1, &priceProduct1);
    scanf("%d %d %f", &productCode2, &unitsProducts2, &priceProduct2);

    totalPrice = (unitsProducts1 * priceProduct1) + (unitsProducts2 * priceProduct2);
    printf("VALOR A PAGAR: R$ %.2f\n",totalPrice);

    return 0;
}