#include<stdio.h>

int main(){
	
	int i,sub[5],Average;
	int total = 0;
	for(i=0;i<5;i++){
		printf("Enter the marks of subject: ");
		scanf("%d",&sub[i]);
	}
	
	for(i=0;i<5;i++){
		total = total + sub[i];
	}
	
	Average = total/5;
	
	printf("The average of five subjects is: %d",Average);
	
	
	return 0;
}