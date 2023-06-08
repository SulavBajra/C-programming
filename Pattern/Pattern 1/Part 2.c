#include<stdio.h>

struct Student{
	int * roll;
	char * name[50];
};


int main(){
	
	int i;
	struct Student p;
	
	for(i=0;i<3;i++){
	printf("Enter the ROll: ");
	scanf("%d",&p[i].roll);
	printf("Enter the ROll: ");
	scanf("%s",p[i].name);
	

    }
    
    for(i=0;i<3;i++){
    	printf("%d\t%s",p.roll,p.name);
	}
}