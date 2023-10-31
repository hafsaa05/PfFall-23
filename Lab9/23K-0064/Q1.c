/* Programmer: Hafsa Rashid
Date: 10/31/23
Descp: You are given the program below.A. Desired result, that is the values of j and k are not swapped. Why is this?
B. Modify the function swap and its call at line 12 to get the desired result.
Write the answer to question A in the comments of the program for part B.
*/
/*#include<stdio.h>
 void swap(int a, int b){
int temp = a;
a = b ;
b = a;
 
int main() {
int j = 2, k = 5;
printf("j=%d, k=%d\n",j,k); 

swap(j,k);
printf("j=%d, k=%d\n",j,k );
 return 0;
}*/

#include<stdio.h>
 void swap(int *a, int *b)
 {
int temp = *a;
*a = *b;
*b = temp;
}
int main()
 {
int j = 2, k = 5;
printf("j=%d, k=%d\n",j,k); 

swap(&j,&k);
printf("j=%d, k=%d\n",j,k );
 return 0;
}

//valid valude of a was not assigned to int b.
//Also, the actual values of our parameters were not changed, so we had to pass the addresss of our integers.
