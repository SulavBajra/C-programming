#include<stdio.h>
#include<string.h>

int main(){
	
	char data[60];
	int i=0,count=1;
	printf("Enter a string: ");
	gets(data);
	int length = strlen(data);
	
	while(i<length-1){
		if(data[i]==' '){
			count++;
		}
		i++;
	}
	
	
	printf("There are %d words in the string",count);

	
	return 0;
}