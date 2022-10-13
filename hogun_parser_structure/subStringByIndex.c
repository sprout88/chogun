
#include <stdio.h>
#include <string.h>


char* subStringByIndex(char* originStr,int startIndex,int endIndex){
	
	static char subStr[1000]="";
	int i=0;

	for(i=0;i<strlen(originStr);i++){
		if(i>=startIndex&&i<=endIndex){
				subStr[i-startIndex]=originStr[i];	
			}
		}
	return subStr;
}


int main(void){
	
	char* originStr = "lets play with john";
	char* subStr = subStringByIndex(originStr,15,19);
	puts(subStr);


}

	
	

