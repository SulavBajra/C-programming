#include<stdio.h>

int main(){
	
	int num1,num2,i,count=0;
	
	printf("Enter a number: ");
	scanf("%d",&num1);
	printf("\nEnter a number: ");
	scanf("%d",&num2);
	
	for(i=num1;i<=num2;i++){
		if(i%2!=0)
		continue;
		printf("%d ",i);
		count++;
	}
	
	printf("\nThe frequency of even numbers is %d",count);
	
	return 0;
}