#include<stdio.h>

int main(){	
  char str[100];
  int i,vowel=0;
  printf("Enter a line: ");
  gets(str);
  for(i=0;i<100;i++){
  	if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
  		vowel++;
	}else if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
	  	vowel++;
	}
  }
	printf("The number of vowel is %d",vowel);
	
	return 0;
}