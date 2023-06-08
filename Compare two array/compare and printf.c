#include<stdio.h>
#include<string.h>

int main(){
	
	char str1[600],str2[600];
	int i,count=0;
	
	printf("Enter a string: ");
	gets(str1);
	printf("Enter another string: ");
	gets(str2);
	
	if(strlen(str1)==strlen(str2)){
		for(i=0;i<strlen(str1);i++){
			if(str1[i]==str2[i])
				count++;
		}
	}
	
	if(count==strlen(str1)){
		printf("Wonderful");
	}else{
		printf("What a disaster");
	}
	
	
	return 0;
}