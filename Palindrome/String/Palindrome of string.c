#include<stdio.h>
#include<string.h>

int main(){
	
	char str[30];
	char temp[30];
	int length,i,k=0,compare=0;
	printf("Enter a string: ");
	gets(str);
	length = strlen(str);
	
    for(i=length-1;i>=0;i--){
		temp[k]=str[i];
		k++;
	}
	for(i=0;i<length;i++){
	if(temp[i]== str[i]){
		compare++;
	}else{
		compare--;
	}
  }

    if(compare==length){
	  printf("Palindrome");
      }else{
	  printf("Not palindrome");
      }
    
     
return 0;
}