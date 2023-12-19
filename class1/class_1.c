#include <stdio.h>

// variable declaration and summation

int main() {
//    double web = 20.00, data = 67.78;
//    if(web >= 30){
//        printf("Your number is more than 30\n");
//        printf( "web = %lf\n data = %.3lf\n sum = %.3lf", web, data, web + data);
//    } else{
//        printf("Your number is less than 30");
//        printf( "web = %lf\n data = %.3lf\nsub = %.3lf", web, data, web - data);
//
//    };
        int number = 80;
//                if (number % 2 == 0){
//                    printf("%d Number is even", number);
//                }else {
//                    printf("%d Number is odd", number);
//                };
//    if (number > 0){
//        printf("%d Number is positive.", number);
//    }else if (number == 0 ){
//        printf("The number is zero.");
//    }else {
//        printf("%d Number is negative.", number);
//    };


    if (number >= 80 && number < 100) {
        printf("%d A+", number);
    } else if (number >= 70 && number < 80) {
        printf("%d A-", number);
    } else if (number >= 60 && number < 70) {
        printf("%d B", number);
    } else if (number >= 50 && number < 60) {
        printf("%d C", number);
    } else if (number >= 40 && number < 50) {
        printf("%d D", number);
    } else {
        printf("%d Fail", number);
    }


    return 0;
}

