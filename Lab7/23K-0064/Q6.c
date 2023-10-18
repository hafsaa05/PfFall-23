//*
//*Programmer:Hafsa Rashid
//*Date:10 Oct'23
//*Description:This program takes an array with N elements as input, and then outputs the frequency of each element present in the array.
//*
#include <stdio.h>    
int main() {   
	int n, visited;
	int arr[n];
	int i,j;
	printf("The size of your array is: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element number %d: \n",i);
		scanf("%d",&arr[i]);
	}
    //The array fr store frequencies of the element.    
    int frequency[n];    
    for(i = 0; i < n; i++){    
        int count = 1;    
        for(j = i+1; j < n; j++) {    
            if(arr[i] == arr[j]) {    
                count++;    
                //to avoid counting same element again    
                frequency[j] = -1;    
            }    
        }    
        if(frequency[i] != -1)    
            frequency[i] = count;    
    }    

    //displays the frequency of each element present in array    
    printf("---------------------\n");    
    printf(" Element | Frequency\n");    
    printf("---------------------\n");    
    for(i = 0; i <n; i++){    
        if(frequency[i] != visited) {    
            printf("    %d", arr[i]);    
            printf("    |  ");    
            printf("  %d\n", frequency[i]);    
        }    
    }    
    printf("---------------------\n");    
    return 0;    
}
