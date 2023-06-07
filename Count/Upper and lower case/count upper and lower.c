#include <stdio.h>
#include <string.h>

int main(){
	
	int i=0,upper=0,lower=0,length;
	char ch[100];
	printf("Enter a string:");
	gets(ch);
	
	length = strlen(ch);
	
	while(i<length){
		if(ch[i]==' '){
			i++;
		}
		if(ch[i]>=65 && ch[i]<=90){
			upper++;
		}else{
			lower++;
		}
		i++;
    }

	printf("There is %d uppercased letters and %d lowercased",upper,lower);
	
	return 0;
}