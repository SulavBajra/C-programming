#include<stdio.h>

int main(){
	
	int i;
	char character[100];
	FILE * fptr1 = fopen("classwork.txt","r");
	FILE * fptr2 = fopen("homework.txt","r");
	FILE * fptr3 = fopen("backup.txt","w");
	
    fgets(character,100,fptr1);
    fputs(character,fptr3);
    
    fgets(character,100,fptr2);
    fputs(character,fptr3);
    
    
	fclose(fptr1);
	fclose(fptr2);
	fclose(fptr3);
	return 0;
}