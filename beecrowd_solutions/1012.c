//
// Created by emons on 28-Dec-23.
// Make a program that reads three doubleing point values: A, B and C. Then, calculate and show:
//a) the area of the rectangle triangle that has base A and height C.
//b) the area of the radius's circle C. (pi = 3.14159)
//c) the area of the trapezium which has A and B by base, and C by height.
//d) the area of the square that has side B.
//e) the area of the rectangle that has sides A and B.

#include <stdio.h>
#include <math.h>

int main() {

    double A, B, C, pi;
    double areaTriangle, areaCircle, areaTrapezium, areaSquare, areaRectangle;
    scanf("%lf %lf %lf", &A, &B, &C);

    areaTriangle = 0.5 * A * C;
    printf("TRIANGULO: %.3f\n", areaTriangle);
    pi = 3.14159;
    areaCircle = pi * pow(C,2);
    printf("CIRCULO: %.3f\n", areaCircle);
    areaTrapezium = ((A + B)/2) * C;
    printf("TRAPEZIO: %.3f\n", areaTrapezium);
    areaSquare = pow(B,2);
    printf("QUADRADO: %.3f\n", areaSquare);
    areaRectangle = A * B;
    printf("RETANGULO: %.3f\n",areaRectangle);
    return 0;
}