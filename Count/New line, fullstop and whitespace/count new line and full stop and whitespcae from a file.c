#include<stdio.h>

int main(){
	
	int i,whitespace=0,fullstop=0,newline=0;
	char ch[20],sen;
	FILE * fptr;
	printf("Enter a filename with .txt extension: ");
	gets(ch);
	fptr = fopen(ch,"r");
	while(fptr){
		sen = fgetc(fptr);
		if(sen==EOF){
		 break;
		}else if(sen == ' '){
			whitespace++;
		}else if(sen == '\n'){
			newline++;
		}else if(sen == '.'){
			fullstop++;
		}
	}
		fclose(fptr);
	printf("Newline: %d\n",newline);
	printf("Fullstop: %d\n",fullstop);
	printf("Whitespace: %d\n",whitespace);
	return 0;
}