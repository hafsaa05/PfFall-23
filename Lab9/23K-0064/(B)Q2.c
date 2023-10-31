/*
Programmer: Hafsa Rashid
Date: 10/31/23
Descp:Write a function for finding product of 2 numbers without using multiplication operator and
loops. Use recursion and addition only.
*/

#include <stdio.h>

int mul(int x, int y) {
    if (y == 0) {
        return 0; // Change comment to correctly reflect the base case
    }
    if (y > 0) {
        return (x + mul(x, y - 1));
    } else {
        return -mul(x, -y);
    }
}

int main() {
    int a = 2;
    int b = 5;
    int result = mul(a, b);

    printf("Product of %d and %d: %d\n", a, b, result);
    return 0;
}

