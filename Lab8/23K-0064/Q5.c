//*
//Programmer: Hafsa Rashid
//Date: 10/24/2023
//Description: In this C program, you are tasked with creating a function called decideCarUsage that helps users decide whether they should use their car on a particular day of the week.

#include <stdio.h>

int decideCarUsage(int num, int day) {
    if ((num % 2 == 0 && day % 2 == 0) || (num % 2 != 0 && day % 2 != 0)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num, day;

    printf("Enter the numeric part of your car's number: ");
    scanf("%d", &num);

    printf("Enter the day of the week: ");
    scanf("%d", &day);

    int shouldUseCar = decideCarUsage(num, day);

    if (shouldUseCar) {
        printf("Your car can be used today.\n");
    } else {
        printf("Your car cannot be used today.\n");
    }

    return 0;
}
