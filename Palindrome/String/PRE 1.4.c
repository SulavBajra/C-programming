#include <stdio.h>
#include <string.h>

int main(){
	
	char ch[20],temp[20];
	int i,j=strlen(ch);
	printf("Enter a string: ");
	gets(ch);
	for(i=0;i<strlen(ch);i++){
		temp[i] = ch[j-1];
		j--;
	}
	
	for(i=0,j=0;i<strlen(ch);i++){
		if(temp[i]== ch[i]){
			j++;
		}
	}
	
	if(j==strlen(ch)){
		printf("The string is palindrome!");
	}else{
		printf("The string is not palidrome!");
	}
	
	return 0;
}