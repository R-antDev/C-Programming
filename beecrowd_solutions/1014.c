//
// Created by emons on 29-Dec-23.
// Calculate a car's average consumption being provided the total distance traveled (in Km) and the spent fuel total (in liters).

#include <stdio.h>

int main() {

    int x;
    float y, fuelEconomy;
    scanf("%d %f",&x , &y);

    fuelEconomy = (float)x / y;
    printf("%.3f km/l\n", fuelEconomy);

    return 0;
}
