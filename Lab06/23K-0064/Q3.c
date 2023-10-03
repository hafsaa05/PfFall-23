/**
* Programmer: Hafsa Rashid
* Description: Print the Program to compute the LCM and GCD of two numbers.
* Date: 3rd Oct'23
**/
#include<stdio.h>
int main()
{
	int num1, num2, gcd, lcm, count=1, small;
	printf("enter 2 integer numbers\n");
	scanf("%d%d", &num1, &num2);
	
	small = (num1<num2)? num1 : num2;
    
    while(count <= 0 small )
    {
    	if(num1%count == 0 && num2%count == 0)
    	{
    		gcd = count;
		}
    	count++;
	}
	lcm = (num1*num2)/gcd;
	
	printf("GCD = %d\nLCM = %d\n", gcd, lcm);
	 return 0;
}
