#include<stdio.h>

int main(){
	
	int num,i;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num%2!=0&&num%7==0){
		for(i=1;i<=10;i++){
			printf("%dX%d=%d\n",num,i,num*i);
		}
	}else{
		printf("Invalid Input");
	}
	return 0;
}