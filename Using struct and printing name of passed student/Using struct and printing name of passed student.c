#include<stdio.h>

struct Student{
	char name[50];
	int roll;
	float percentage;
};

int main(){
	struct Student * ptr;
	int i,n;
	printf("Enter the number of student: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the name of student: ");
		scanf("%s",&(ptr+i)->name);
		printf("Enter the roll number of student: ");
		scanf("%d",&(ptr+i)->roll);
		printf("Enter the percentage of student: ");
		scanf("%f",&(ptr+i)->percentage);
		printf("\n");
	}
	
	for(i=0;i<n;i++){
		if((ptr+i)->percentage>=80){
			printf("%s",(ptr+i)->name);
		}
	}
	
	return 0;
}