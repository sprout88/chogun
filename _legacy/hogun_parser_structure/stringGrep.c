#include <stdio.h>
#include <string.h>

char* stringGrep(char* str,char ch){
	static char buffer[]="";
	
	int i=0;
	for(i=0;i<strlen(str);i++){
		if(str[i]=='G') break;
		buffer[i]=str[i];
	}
	
	return buffer;
	
	
}
