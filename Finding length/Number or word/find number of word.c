#include<stdio.h>
#include<string.h>
int main(){
	
	char str[600];
	int i,count=1;
	
	printf("Enter a string: ");
	gets(str);
	for(i=0;i<strlen(str);i++){
		if(str[i]==' ')
		count++;
	}
	printf("The number of word in the string is : %d",count);
	
	return 0;
}