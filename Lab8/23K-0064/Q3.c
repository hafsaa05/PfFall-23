#include <stdio.h>
#include <string.h>
void main () {
	char inputText[100];// str[20]
	char charSearch;// char ch
	int count = 0;
	int i;
	
	printf("Enter your text: ");
	gets(inputText);
	printf("%d", inputText);
	printf("Enter the letter you wanna search: ");
    scanf("%c", &charSearch);
    
    for ( i=0; inputText[i]!='\0'; i++) {
    	if ( inputText[i]==charSearch ) {
    		count++;
		}
	}
	printf("\nThe number of occurences of letter a in the given text is %d", count);
}
