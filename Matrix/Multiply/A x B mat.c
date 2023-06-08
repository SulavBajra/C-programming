
#include<stdio.h>

int main(){
	
	int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int B[3][3]={{9,8,7},{6,5,4},{3,2,1}};
	int X[3][3];
	int i,j,k;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			X[i][j]= 0;
			for(k=0;k<3;k++){
				X[i][j]=X[i][j]+A[i][k]*B[k][j];
			}
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",X[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}