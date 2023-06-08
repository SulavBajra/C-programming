#include<stdio.h>

int main(){
	
	int i;
	char data[20];
	FILE * fptr = fopen("classwork.txt","w");
	if(fptr == NULL){
		printf("no file\n");
	}else{
		printf("There is file\n");
		printf("Enter a line of text:\n");
	 for(i=0;i < sizeof(data);i++){
	    scanf("%c",&data[i]);
 	    fputc(data[i],fptr);
	}
}
	fclose(fptr);
	
	return 0;
}