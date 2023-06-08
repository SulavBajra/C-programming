#include<stdio.h>
#include<string.h>

int main(){
	
	char ch[15];
	int length;
	printf("Enter a string: ");
	scanf("%s",&ch);
	length=strlen(ch);
	printf("The length of string is %d",length); 
	
	return 0;
}