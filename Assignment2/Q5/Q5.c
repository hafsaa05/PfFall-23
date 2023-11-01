#include <stdio.h>
#include <math.h>

int isRamanujanHardy(int num) {
    int count = 0, i;
    for (i = 1; i <= cbrt(num); i++) {
        int a = i * i * i;
        int b = cbrt(num - a);
        if (a + b * b * b == num) {
            count++;
            if (count == 2) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int n = 33,num;// plz dont make n much larger number if system is slow
    for ( num = 1; num < n * n * n; num++) {
        if (isRamanujanHardy(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 99;
}
