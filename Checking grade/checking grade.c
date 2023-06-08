#include<stdio.h>

int main(){
	
	int subject[6];
	int i,avg;
	int tot=0;
	
	for(i=0;i<5;i++){
		printf("Enter marks of subject\n");
		scanf("%d",&subject[i]);
		tot = tot + subject[i];
	}
	
	avg = tot/5;
	
	if(avg>=80 && avg <=100){
		printf("You got A");
	}else if(avg>=60 && avg <= 79){
		printf("You got B");
	}else if(avg>=40 && avg <= 59){
		printf("You got c");
	}else{
		printf("You got F");
	}
	
	
	
	//if(subject)
	
	

	return 0;
}