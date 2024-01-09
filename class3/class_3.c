//
// Created by emons on 31-Dec-23.
//

// odd even switch
#include <stdio.h>
#include <math.h>

int main () {
    int N;
    scanf("%d", &N);

//    switch (N % 2) {
//        case 0:
//            printf("Number is Even.");
//            break;
//        case 1:
//            printf("Number is odd.");
//            break;
//        default:
//            printf("Invalid Input");
//            break;
//    }

    // for loop

//    for (int i = 0; i <= N; i++) {
//        printf("%d\n", i);
//    }

// print even
//    for (int i = 0; i <= N; i++) {
//        if(i % 2 == 0){
//            printf("%d\n", i);
//        }
//    }
//// print odd
//    for (int i = 0; i <= N; i++) {
//        if(i % 2 != 0){
//            printf("%d\n", i);
//        }
//    }
//
//    // while loop
//    int iw = 0;
//    while (iw <= N){
//        printf("%d\n", iw);
//        iw += 2;
//    }
//
//    // do while
//
//    int iwd = 0;
//    do {
//        printf("%d\n", iwd);
//        iwd += 1;
//    } while (iwd <= N);
//

// sum of range
//    int sum = 0;
//    for (int i = 0; i <= N; ++i) {
//        sum += i;
//    }
//    printf("The sum of the series is: %d", sum);
//
//    return 0;
//}

// task 1

//    int sum = 0;
//    for (int i = 0; i <= N; ++i) {
//        sum += pow(i,2);
//    }
//    printf("Sum of series: %d", sum);


// homework
// * prime number and after for loop everything

// factorial

//    int fact = 1;
//    for (int i = 1; i <= N; i++) {
//        fact *= i;
//    }
//    printf("Factorial of %d is : %d",N, fact);
//
//
// sum with while loop

int sum = 0, i = 0;
while(i <= N){
    sum += i;
    i++;
}
printf("%d", sum);

// homework -> Multiplication table: 5 * 1 = 5



}




