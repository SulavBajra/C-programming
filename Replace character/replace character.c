#include<stdio.h>
#include<string.h>

int main(){
	
	char str[30];
	//char replace = 'Z';
	int i,temp=0;
	
	printf("Enter a string: ");
	gets(str);
	printf("\nBefore altercation!\n");
	printf("%s\n",str);
	for(i=0;i<strlen(str);i++){
		if(str[i]=='a'){
			str[i]='z';
		}
	}
	
	printf("The string after altering: %s",str);
	
	return 0;
}