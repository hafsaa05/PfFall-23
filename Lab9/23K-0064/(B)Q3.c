int GCD(int a, int b)
{
	int i, gcd=0;
	 for(i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
            gcd = i;
    }

    printf("GCD of %d and %d is %d", a, b, gcd);
	return 0;
	
}
int euclid(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return euclid(b,a%b);
	}
}
#include<stdio.h>
int main()
{
	int x,y;
	int temp;
	printf("\nEnter first number: ");
	scanf("%d", &x);
	printf("\nEnter second number: ");
	scanf("%d", &y);
	if(x>y)
	{
		temp =x;
		x=y;
		y=temp;
	}
	int gcd1=euclid(x,y);
	printf("\nThe greatest common divisor of %d and %d is %d",x,y,gcd1);
	printf("\n");
	GCD(x,y);
	
}
