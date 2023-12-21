#include <stdio.h>

int main(){

//    int num;
//    // taking user input
//    printf("Enter a number: ");
//    scanf("%d", &num);

    /* multiline comment */
    // taking more inputs in one line
    // max of 3

//    int a, b, c;
//    printf("Enter three number here: ");
//    scanf("%d %d %d", &a, &b, &c);
//
//    if (a > b){
//        if (a > c) {
//            printf("A is max");
//        } else {
//            printf("C is Max");
//        }
//    } else {
//        if (b > c) {
//            printf("B is max");
//        }
//    }

    // swap of two values with third variable

//    int q, w, e;
//    scanf("%d %d", &q, &w);
//    printf("Before swap \n q = %d \n w = %d \n", q , w);
//
//    e = w;
//    w = q;
//    q = e;
//
//    printf("After swap \n q = %d \n w = %d \n", q , w);

    int a , b;
    scanf("%d %d", &a, &b);
    printf("Before swap \n a = %d \n b = %d \n", a ,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap \n a = %d \n b = %d \n", a ,b);


//    if(num > 0) {
//        if(num % 2 == 0){
//            printf("This number is Even. \n");
//        }else {
//            printf("This number is Odd. \n");
//        }
//    }else {
//
//    }



    return 0;
}