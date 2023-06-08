#include<stdio.h>

int main(){
	
	int i;
	char character[40];
	FILE * fptr1=fopen("classwork.txt","r");
	FILE * fptr2=fopen("homework.txt","w");
	if(fptr1==NULL){
		printf("No File:\n");
	}else{
	   fgets(character,40,fptr1);
	   fputs(character,fptr2);
	}
	
	
	fclose(fptr1);
	fclose(fptr2);

	return 0;
}
