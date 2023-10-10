//**
//Programmar: Hafsa Rashid
//8th Oct'23
//Descp:To print a program that will generate the Fibonacci series up to 10000. Also find the sum of the generated Fibonacci numbers divisible by 3, 5 or 7 only.
//**
#include <stdio.h>

int main() {
         int i=1, prev=1, ans=0, temp, sum=0, n=20;
         for (i=0; i<20; i++)
         {
             temp=ans;
             ans=ans+prev;
             prev=temp;
             printf("%d", ans);
             if(ans%3==0 || ans%5==0 || ans%7==0)
             {
                 sum=sum+ans;
             }
         }
         printf("sum of fibonacci numbers divisible by 3,5or7 is: %d\n", sum);
}
