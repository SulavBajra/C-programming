#include<stdio.h>

int main(){
	
	int num,num2,i;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	num2= -num;
	
	for(i=num2;i<=num;i++){
		printf("%d\n",i);
	}
	
	return 0;
}