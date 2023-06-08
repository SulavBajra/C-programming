#include<stdio.h>

int main(){
	
	int num,i;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	for(i=0;i<=10;i++){
		if(i%2!=0)
		continue;
		printf("%dX%d= \b%d\n",num,i,num*i);
	}
	
	
	return 0;
}