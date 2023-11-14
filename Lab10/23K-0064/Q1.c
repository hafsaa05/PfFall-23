#include <stdio.h>

void printanyarray(void* arr, int size, char type) {
    int i;

    switch (type) {
        case 'i':
            for (i = 0; i < size; i++) {
                printf("%d, ", ((int*)arr)[i]);
            }
            printf("\n");
            break;
        case 'c':
            for (i = 0; i < size; i++) {
                printf("%c, ", ((char*)arr)[i]);
            }
            printf("\n");
            break;
        case 'f':
            for (i = 0; i < size; i++) {
                printf("%f, ", ((float*)arr)[i]);
            }
            printf("\n");
            break;
        case 'd':
            for (i = 0; i < size; i++) {
                printf("%lf, ", ((double*)arr)[i]);
            }
            printf("\n");
            break;
        case 'u':
            for (i = 0; i < size; i++) {
                printf("%u, ", ((unsigned*)arr)[i]);
            }
            printf("\n");
            break;
        default:
            break;
    }
}

int main() {
    int a[10] = {0};
    char c[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    float f[10] = {0.0f}; 

    printanyarray(a, 10, 'i');
    printanyarray(c, 10, 'c');
    printanyarray(f, 10, 'f');

    return 0;
}
