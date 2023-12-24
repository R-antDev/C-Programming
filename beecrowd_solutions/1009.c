//
// Created by emons on 24-Dec-23.
// Make a program that reads a seller's name,
// his/her fixed salary and the sale's total made by himself/herself in the month (in money).
// Considering that this seller receives 15% over all products sold,
// write the final salary (total) of this seller at the end of the month , with two decimal places.
//- Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.
//
//- Don’t forget the blank spaces.

#include <stdio.h>

int main() {

    char name;
    double fixedSalary, totalSells, totalSalary;
    scanf("%s %lf %lf", &name, &fixedSalary, &totalSells);

    totalSalary = fixedSalary + (totalSells * 0.15);
    printf("TOTAL = R$ %.2lf\n", totalSalary);


    return 0;
}
