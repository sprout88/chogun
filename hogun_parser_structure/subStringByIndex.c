
#include <stdio.h>
#include <string.h>

/*
char* subStringByIndex(char* str,int startIndex,int endIndex){
	char* startStr = 
	
	
	return 0;
}
*/

int main(void){
	char originStr[] = "Hello World";
	char subStr[100]="";
	
	puts(originStr);

	int startIndex = 3;
	int endIndex = 6;
	
	int i=0;
	int j=0;
	for(i=0;i<strlen(originStr);i++){
		if(i>=startIndex&&i<=endIndex){
			subStr[i]=originStr[i];
			}
		}
		
		puts(subStr);

}

	
	

