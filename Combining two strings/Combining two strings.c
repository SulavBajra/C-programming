#include <stdio.h>
#include <string.h>

int main(){
	
	char ch1[20],ch2[20],temp[40];
	int i,j;
	
	printf("Enter a string: ");
	gets(ch1);
	printf("Enter another string: ");
	gets(ch2);
	
	for(i=0;i<strlen(ch1);i++){
		temp[i]=ch1[i];
	}
	j=i;
	while(j<strlen(ch2)*10){
		temp[j]=ch2[j-i];
		j++;
	}
	
	printf("%s",temp);
	
	
	
	return 0;
}