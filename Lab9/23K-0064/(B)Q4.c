#include <stdio.h>

void printFibonacci(int a, int b, int n)
{
    if (n > 0)
    {
        printf("%d ", a);

        printFibonacci(b, a + b, n - 1);
    }
}

int main()
{
    int n;
    printf("\nEnter the number of Fibonacci numbers you want to print: ");
    scanf("%d", &n);

    int a = 0, b = 1;

    printFibonacci(a, b, n);

    return 0;
}
