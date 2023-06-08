#include<stdio.h>

int main(){
	
	char choice;
	int num1,num2;
	
	while(choice!='E'){
	printf("A - Addition\n");
	printf("S - Subtraction\n");
	printf("M - Multiplication\n");
	printf("D - Division\n");
	printf("R - Remainder\n");
	printf("E - Exit\n");
	printf("Enter what you want to do: ");
	scanf("%c",&choice);
	
	if(choice!='E'){
	printf("\nEnter the first number: ");
	scanf("%d",&num1);
	printf("\nEnter the second number: ");
	scanf("%d",&num2);
}
	
	switch(choice){
		case 'A':
			printf("\nThe sum of %d and %d is %d",num1,num2,num1+num2);
			break;
		case 'S':
			printf("\nThe subtraction of %d and %d is %d",num1,num2,num1-num2);
			break;
		case M:
			printf("\nThe multiply of %d and %d is %d",num1,num2,num1*num2);
			break;
		case D:
			printf("\nThe division of %d and %d is %d",num1,num2,num1/num2);
			break;
		case R:
			printf("\nThe remainder of %d and %d is %d",num1,num2,num1*num2);
			break;
		default:
			printf("Invalid")
	}

}
	
	return 0;
}