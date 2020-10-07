#include<stdio.h>
void main(){
	char a, str[81], *ptr;
	printf("\n Enter a sentence: ");
	gets(str);
	printf("\n Enter character to search for: ");
	a = getchar();
	ptr = strchr (str,a);
	printf("\nString starts at address: %u", ptr);
	printf("\nPosition of first occurrence starting from 0 is : %d", ptr-str);
	
}
