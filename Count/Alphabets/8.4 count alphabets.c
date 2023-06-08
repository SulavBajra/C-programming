#include<stdio.h>
#include<string.h>

int main(){
	
	char str[50];
	int i,alpha=0,digit=0;
	printf("Enter a string: ");
	gets(str);
	for(i=0;i<strlen(str);i++){
		if(str[i]==' '){
			continue;
		}else if(str[i]>='A'&&str[i]<='Z'){
			alpha++;
		}else if(str[i]>='a' && str[i]<='z'){
			alpha++;
		}else{
			digit++;
		}
	}
	
	printf("Alphabet:%d\n",alpha);
	printf("Digits or special characters:%d\n",digit);
	
	
	return 0;
}