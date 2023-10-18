#include<stdio.h>
int main() {

	int n;
	int i;
	int sum =0;
	printf("What's the size of your number? : \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter your number: \n");
	for(i=0;i<n;i++) {
	
		scanf("%1d",&arr[i]);
	}

		for(i=0;i<n;i++) {
		
		sum = sum +arr[i];
	}
	printf("The sum is: %d\n", sum);
}
