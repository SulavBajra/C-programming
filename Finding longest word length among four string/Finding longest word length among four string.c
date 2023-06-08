#include<stdio.h>
#include<string.h>

int leng(char * str){
	int i,count;
	count = strlen(str);
	for(i=10;i<30;i=i+10){
		if(count<strlen(str+i))
			count = strlen(str+i);
	}
	
	return count;
}

int main(){
	
	int length,i;
	char str[4][10];
	for(i=0;i<4;i++){
		gets(str[i]);
	}
	
    length=leng(*str);
    printf("The longest wordlength is %d",length);
	
	return 0;
}