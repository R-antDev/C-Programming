//
// area of a triangle
//

#include <stdio.h>

int main(void){
    float base, height;
    printf("Enter base and height:");
    scanf("%f %f", &base , &height);

    float areaOfTriangle = 0.5 * (base * height);
    printf("The area of triangle is: %.2f\n", areaOfTriangle);
}