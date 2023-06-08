#include<stdio.h>

int main(){
	
	int i;
	char character;
	FILE * fptr= fopen("classwork.txt","r");
	if(fptr==NULL){
		printf("There is no file");
	}else{
		printf("The content of file:\n");
		while(character != EOF){
			printf("%c",character);
			character = fgetc(fptr);
		}
	}
	fclose(fptr);
	
	return 0;
}