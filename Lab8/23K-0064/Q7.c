#include <stdio.h>

int calculateDiscount(int purchaseAmount, int visitCount) {
    int discount = 0;

    if (visitCount > 10 && purchaseAmount >= 50) {
        discount = purchaseAmount * 0.15;
    } else if (visitCount > 5 && purchaseAmount >= 30) {
        discount = purchaseAmount * 0.10;
    }

    return discount;
}

int main() {
    int purchaseAmount, visitCount;
    
    printf("Enter your total purchase amount: ");
    scanf("%d", &purchaseAmount);
    
    printf("How many times have you visited the shop in the past month? ");
    scanf("%d", &visitCount);

    int discount = calculateDiscount(purchaseAmount, visitCount);

    if (discount > 0) {
        printf("Discount: $%d\n", discount);
    } else {
        printf("No discount will be applied.\n");
    }

    return 0;
}
