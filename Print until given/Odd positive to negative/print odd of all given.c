#include<stdio.h>

int main(){
	
	int num,i,num2;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	num2 = -num;
	
	for(i=num2;i<=num;i++){
		if(i%2==0)
		continue; 
		printf("%d\n",i);
	}
	
	return 0;
}