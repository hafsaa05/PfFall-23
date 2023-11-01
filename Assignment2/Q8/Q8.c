#include <stdio.h>

int calculatePersistence(int n) {
    int persistence = 0;
    
    while (n >= 10) {
        int product = 1;
        while (n > 0) {
            product *= n % 10;
            n /= 10;
        }
        n = product;
        persistence++;
    }
    
    return persistence;
}

int main() {
    int num;

    while (1) {
        printf("Enter a positive integer---EOF to exit---> ");
        if (scanf("%d", &num) == 1) {
            int result = calculatePersistence(num);
            printf("The persistence of %d is %d\n", num, result);
        } else {
            break;
        }
    }

    return 99;
}
