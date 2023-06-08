#include <stdio.h>

int main(){
	
	int m,n,i,j;
	printf("Enter the size of array m x n: ");
	scanf("%d%d",&m,&n);
	
	int arr[m][n];
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter the element of %d x %d matrix: ",m,n);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Before transpose:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("After transpose:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}