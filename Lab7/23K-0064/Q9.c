//*
//*Programmer:Hafsa Rashid
//*Date:10 Oct' 23
//*Description: Junaid wants to keep track of all mobile phone bills in his X company branches. Let Y be the number of company mobile phones in each branch. Create a 2D array for bill amount, where keep track of branch ID in row subscript, mobile phone IDs in column subscript. Ask users to enter a bill for all mobile phones in all branches. Your program should print the following:
//- Total bill for all branches
//- Total bill for each branch
//- Branch ID where maximum bill arrived
//- Branch and Mobile Phone IDs where bill is highest of all mobile phones.
//*

#include<stdio.h>
int main() {

    int X, Y; 

    printf("The number of branches is(X): \n");
    scanf("%d", &X);
    printf("The number of mobile phones per branch is(Y): \n");
    scanf("%d", &Y);

    // creating a 2D array for bill amounts with dimensions X (branches) and Y (mobile phones)
    double bills[X][Y];

    double totalBill = 0.0;
    double maxBill = 0.0;
    int maxBillBranchID = -1;
    int maxBillMobileID = -1;
	int branch;
	int mobile;

    for (branch = 0; branch < X; branch++) {
        printf("Enter bills for branch %d:\n", branch);
        for (mobile = 0; mobile < Y; mobile++) {
            printf("Enter bill for mobile phone %d: ", mobile);
            scanf("%lf", &bills[branch][mobile]);
            totalBill += bills[branch][mobile]; // updating the total bill:

            // check for the maximum bill
            if (bills[branch][mobile] > maxBill) {
                maxBill = bills[branch][mobile];
                maxBillBranchID = branch;
                maxBillMobileID = mobile;
            }
        }
    }

    printf("Total bill for all branches: %.2lf\n", totalBill);

    printf("Total bill for each branch:\n");
    for (branch = 0; branch < X; branch++) {
        double branchTotal = 0.0;
        for (mobile = 0; mobile < Y; mobile++) {
            branchTotal += bills[branch][mobile];
        }
        printf("Branch %d: %.2lf\n", branch, branchTotal);
    }

    printf("Branch ID where maximum bill arrived: %d\n", maxBillBranchID);
    printf("Branch and Mobile Phone IDs with the highest bill:\n");
    printf("Branch: %d\n", maxBillBranchID);
    printf("Mobile Phone: %d\n", maxBillMobileID);

    return 0;


}
