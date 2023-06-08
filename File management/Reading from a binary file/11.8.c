#include<stdio.h>
#include<string.h>

struct employee{
	int employeeid;
	char name[50];
	char address[60];
};


int main(){
	
	struct employee emp[5];
	FILE * fptr = fopen("Employee_data.bin","rb");
	int i;
	
	printf("ID\tName\tAddress\n");
	for(i=0;i<5;i++){
		fread(&emp[i],sizeof(struct employee),1,fptr);
		if(emp[i].employeeid%2==0&&strcmp(emp[i].address,"Kathmandu")==0)
		printf("%d\t%s\t%s\n",emp[i].employeeid,emp[i].name,emp[i].address);
	}
	
	return 0;
}