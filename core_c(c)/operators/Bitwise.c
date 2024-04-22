/*
Dec - 3
Bin - ? - 0011

Dec - 17
Bin - 10001

2^7 2^6 2^5 2^4 2^3 2^2 2^1 2^0
128 64  32  16  8   4   2   1

A B & | ^ ~
0 0 0 0 0 1
0 1 0 1 1 1
1 0 0 1 1 0
1 1 1 1 0 0

<< - left shift
>> - right shift

*/

#include<stdio.h>

void main(){
    //int a = 3;
    //int b = 5;
    //int res = a & b;
    //int res = a | b;
    //int res = a ^ b;

    int x = 7;
    x = x << 1;
    x = x << 3;
    printf("%d", x);
}

