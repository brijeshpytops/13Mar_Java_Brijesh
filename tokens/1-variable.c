/*
In C programming, a variable is a named storage location in computer memory that holds a value which can be changed during program execution. Variables are used to store and manipulate data within a program. Each variable has a specific data type which determines the type of data it can hold and the operations that can be performed on it.

syntax:
datatype var_name = value

int num = 10
int age = 34
float weight = 50.4

*/
#include<stdio.h>

void main(){
    int num1 = 10;
    int num2 = 20;
    float num3 = 30.4, num4 = 40.2;
    int accNo, pin;

    printf("Enter your accno & pin: ");
    scanf("%d %d", &accNo, &pin);

    printf("You have enterd your pin is: %d\n", pin);
    printf("Your account number: %d\n", accNo);

    pin = 2222;

    printf("You have enterd your pin is: %d\n", pin);
    printf("Your account number: %d\n", accNo);



    //printf("num1: %d,\nnum2: %d,\nnum3: %f,\nnum4: %.2f\n", num1, num2, num3, num4);

}
