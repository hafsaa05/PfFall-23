//*
//*Programmer:Hafsa Rashid
//*Date:10' Oct 23
//*Description:Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S. In case of multiple subarrays, return the subarray which comesfirst on moving from left to right.
//*
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;

	printf("The size of your array: \n");
	scanf("%d",&n);
	printf("\Enter your array: \n");
	for(i=0;i<n;i++)
	{
		printf("Enter your element number %d: ",i+1);
		scanf("%d",&arr[i]);
	}
    int num;
	printf("\nEnter the number: ");
	scanf("%d",&num);
    int targetsum, left = 0, right = 0, Sum = 0;

    while (right < n) {
        Sum += arr[right];

        while (Sum > targetsum) {
        while (Sum > num) {
            Sum -= arr[left];
            left++;
        }
        if (Sum == num) {
            printf("Subarray with the sum %d is: ", num);
            for (i = left; i <= right; i++) {
                printf("%d ", arr[i]);
            }
            return 0;
        }
        right++;
    }
    printf("No subarray with the sum %d found.\n", num);
    return 0;
}
}
