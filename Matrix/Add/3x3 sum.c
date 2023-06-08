#include<stdio.h>

int main(){
	
	int arr[3][3];
	int i,j,sum=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the value of [%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum = sum + arr[i][j];
		}
	}
	
	printf("The sum of the elements of the 3x3 matrix is:%d",sum);
	
	return 0;
}