#include<stdio.h>

struct employee{
	int employeeid;
	char name[50];
	char address[60];
};

int main(){
	
	FILE * fptr = fopen("Employee_data.bin","wb");
	struct employee emp[5];
	int i;
	for(i=0;i<5;i++){
		printf("Enter employee id: ");
		scanf("%d",&emp[i].employeeid);
		printf("Enter employee name: ");
		scanf("%s",&emp[i].name);
		printf("Enter employee address: ");
		scanf("%s",&emp[i].address);
		fwrite(&emp[i],sizeof(struct employee),1,fptr);
		printf("\n");
	}
	
	fclose(fptr);
	
	return 0;
}