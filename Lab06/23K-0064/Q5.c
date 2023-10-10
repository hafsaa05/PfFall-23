//**
//Programmar: Hafsa Rashid
//8th Oct'23
//Descp:To print a pattern of numbers.
//**
#include <stdio.h>

int main() {
    int i;
    for (i=0; i<=6; i++) {
        int rem = i % 2;
        if (rem==0) {
        printf("%d\t%d\t%d\t%d\n", i,i,i,i);
        } else {
        printf("\t%d\t%d\n", i,i);
    }
    }
    return 0;
}
