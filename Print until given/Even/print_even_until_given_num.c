#include<stdio.h>

int main(){
	
	int num,i;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
			if(i==num)
			break;	
		printf("%d\n",i=i+1);	
	}	
	return 0;
}