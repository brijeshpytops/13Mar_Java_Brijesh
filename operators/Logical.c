/*
A B C && ||
T T T T  T
F T T F  T
T F T F  T
T T F F  T
F F F F  F

A !
T F
F T
*/
// logical operators
#include<stdio.h>
void main(){
    int a = 1,b = 0;
    int c = 10 < 20;
    int d = 20 < 10;
    int age = 45;
    float weight = 49;

    //int res = ((a && c) || b) && d;
    //int res = (age >= 18) && (weight >= 50);
    //int res = ! a;
    int res = ! b;
    printf("%d", res);


}
