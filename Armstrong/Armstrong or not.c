#include<stdio.h>

int main(){
	
	int r,n,sum=0,temp;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	temp=n;
	
	while(n>0){
		r=n%10;
		sum=sum+(r*r*r);
		n =n/10;
	}
	
	if(sum==temp){
		printf("The number is armstrong");
	}else{
		printf("The number is not armstrong");
	}

	return 0;
}