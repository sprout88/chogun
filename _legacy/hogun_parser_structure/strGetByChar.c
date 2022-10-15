#include <stdio.h>
#include <string.h>

char* strGetByChar(char* str,char startChar,char endChar){
	static char buffer[]="";
	int copy = 0;
	
	int i=0;
	for(i=0;i<strlen(str);i++){
		if(str[i]==startChar) copy=1;
		if(copy=1) buffer[i]=str[i+1];		
		if(str[i+2]==endChar) break;
	}
	return buffer;
}

