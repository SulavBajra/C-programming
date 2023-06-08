#include<stdio.h>

int main(){
	
	FILE * fptr = fopen("employee_data.txt","w");
	int i,employeeid;
	char employeename[100],address[100];
	fprintf(fptr,"ID\tName\tLocation\n\n");
	for(i=1;i<3;i++){
		printf("\n");
		printf("Enter the data of employee %d\n",i);
		printf("Employee id: ");
		scanf("%d",&employeeid);
		fprintf(fptr,"%d",employeeid);
		printf("Employee name: ");
		scanf("%s",employeename);
		fprintf(fptr,"\t%s",employeename);
		printf("Employee address: ");
		scanf("%s",address);
		fprintf(fptr,"\t%s",address);
		fprintf(fptr,"\n");
	}
	fclose(fptr);
	FILE * fptr2 = fopen("employee_data.txt","r");
	for(i=1;i<3;i++){
		printf("\n");
		fscanf(fptr2,"%d",employeeid);
		printf("%d\t",employeeid);
		fscanf(fptr2,"%s",employeename);
		printf("%s\t",employeename);
		fscanf(fptr2,"%s",address);
		printf("%s\n",address);
	}
	
	fclose(fptr2);
	return 0;
}