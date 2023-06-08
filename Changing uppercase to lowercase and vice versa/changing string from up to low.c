#include<stdio.h>
#include<string.h>

int main(){
	
	int i;
	char str[30];
	printf("Enter a string: ");
	gets(str);
	
	for(i=0;i<strlen(str);i++){
		if(str[i]>=65 && str[i]<=90){
			str[i]=str[i]+32;
		}
	}
	printf("\nAfter lowercased:\n");
	printf("%s",str);
	
	for(i=0;i<strlen(str);i++){
		if(str[i]>=97 && str[i]<=122){
			str[i]=str[i]-32;
		}
	}
	printf("\nAfter Uppercased:\n");
	printf("%s",str);
	
	return 0;
}