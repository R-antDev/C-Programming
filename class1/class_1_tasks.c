#include <stdio.h>
#include <string.h>

int number = 81;
// grade calculator with nested if
void gpaCalc(int num){
    if(num < 0 || num > 100){
        printf("Invalid Number.");
    } else {
        float gpa = ((float) num / 20) - 1;
        if (gpa >= 3.0) {
            printf("GPA: %.2f and Grade: A+ \n", gpa);
        } else if (gpa >= 2.5) {
            printf("GPA: %.2f and Grade: B \n", gpa);
        } else if (gpa >= 2.0) {
            printf("GPA: %.2f and Grade: C \n", gpa);
        } else if (gpa >= 1.0) {
            printf("GPA: %.2f and Grade: D \n", gpa);
        } else {
            printf("Grade: F \n");
        }
    }
}

// even or odd function
void evenORodd(int num){
    if(num % 2 ==0){
        printf("This number is Even. \n");
    }else {
        printf("This number is Odd. \n");
    }
}

// positive or negative function
void positive_Negative(int num){
    if(num > 0){
        printf("This number is Positive. \n");
    } else {
        printf("This number is Negative. \n");
    }
}

// calculator with add, sub, mul, div, mod
int num1 = 30;
int num2 = 20;

void calculator(int n1, int n2){
    printf("Sum: %d \n", n1 + n2);
    printf("Sub: %d \n", n1 - n2);
    printf("Mul: %d \n", n1 * n2);
    printf("Div: %.3f \n", (float) n1 / (float )n2 );
    printf("Mod: %d \n", n1 % n2);
}

char userName[11] = "user";
char passWord[11] = "pass";

// user pass checking
void userPass(const char *user, const char *pass) {
    if (strcmp(user, "user") == 0) {
        if (strcmp(pass, "pass") == 0) {
            printf("Login successful.\n");
        } else {
            printf("Password incorrect.\n");
        }
    } else {
        printf("User name is incorrect.\n");
    }
}

int main() {
    gpaCalc(number);
    evenORodd(number);
    positive_Negative(number);
    calculator(num1, num2);
    userPass(userName, passWord);

    return 0;
}