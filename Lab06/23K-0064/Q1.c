/**
* Programmer: Hafsa Rashid
* Description: Printing a perfect number
* Date: 3rd Oct'23
*
*/
#include<stdio.h>
int main()
{
             int num;
             int i=0;
             int sum=0;
             printf("enter any number");
             scanf("%d", &num);
             while(i<num) {
               if(num%i==0)
                 sum=sum+i;
                 i++;
}
             if(sum==num)
             printf("%d is a perfect number", &i);
               else
            scanf("%d isn't a perfect number", &i);
            return 0;
}
