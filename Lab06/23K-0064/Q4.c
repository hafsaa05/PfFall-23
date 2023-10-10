//**
//Programmar: Hafsa Rashid
//8th Oct'23
//Descp:To print a program by taking Two integers a and b taken as input from the user.The program should print if the exceeded number is even or odd.
//**
#include <stdio.h>

int main() {
         int a,b, i;
         printf("Enter two integers\n");
         scanf("%d", &a);
         scanf("%d", &a);
        
         for(i=a;i<=b;i++)
         {
             switch(i)
             {
                 case 0:printf("Zero\n");break;
                 
                 case 1:printf("One\n");break;
                 
                 case 2:printf("Two\n");break;
                
                 case 3:printf("Three\n");break;
                 
                 case 4:printf("Four\n");break;
                 
                 case 5:printf("Five\n");break;
                
                 case 6:printf("Six\n");break;
                 
                 case 7:printf("Seven\n");break;
                
                 case 8:printf("Eight\n");break;
                 
                 case 9:printf("Nine\n");break;
                 
                 default:
                 
                     if(i%2==0)
                     {
                         printf("Even\n");
                     } else {
                         printf("Odd\n");
                     }
                 
             }
         }
}
