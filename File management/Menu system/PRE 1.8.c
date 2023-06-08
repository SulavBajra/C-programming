#include <stdio.h>

int main(){
	
	int choice,flag=1;
	char fname[50],data[60];
	printf("1 - Create a file of given filename\n");
	printf("2 - Delete a file of given filename\n");
	printf("3 - Write a file of given filename\n");
	printf("4 - Read a file of given filename\n");
	printf("5 - Append a file of given filename\n");
	printf("6 - Exit\n");
	
	while(flag){
	printf("Enter your choice: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		    printf("Enter a file name: ");
		    scanf("%s",&fname);
		    FILE * fptr = fopen(fname,"w");
		    fclose(fptr);
		    printf("\n");
		    break;
		case 2:
			printf("Enter the filename: ");
			scanf("%s",&fname);
			remove(fname);
			printf("\n");
		    break;
		case 3:
			printf("Enter the filename: ");
			scanf("%s",&fname);
			FILE * fptr2 = fopen(fname,"w");
			scanf("%s",data);
			fputs(data,fptr2);
			fclose(fptr2);
			printf("\n");
		    break;
		case 4:
			printf("Enter the filename: ");
			scanf("%s",&fname);
			FILE * fptr3 = fopen(fname,"r");
			printf("%s\n",fgets(data,60,fptr3));
			fclose(fptr3);
			printf("\n");
		    break;
		case 5:
			printf("Enter the filename: ");
			scanf("%s",&fname);
			FILE * fptr4 = fopen(fname,"a");
			scanf("%s",data);
			fprintf(fptr4,"%s",data);
			fclose(fptr4);
			printf("\n");
		    break;
		case 6:
			flag = 0;
			break;
		default:
			printf("INVALID!");
			printf("\n");
	}
	
}
	return 0;
}