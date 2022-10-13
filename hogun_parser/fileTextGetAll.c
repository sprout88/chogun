//fgets는 개행 전까지만 파일에서 텍스트를 읽어온다.
//fileTextGetAll은 텍스트의 모든 텍스트를 읽어온다.
 
#include <stdio.h>
#include <string.h>

char* fileTextGetAll(FILE* fp){
	
	char buffer[1000]="";
	static char str[1000]="";
	
	fgets(buffer,sizeof(buffer),fp);
	
	while(fgets(buffer,sizeof(buffer),fp)!=NULL){
		//puts(buffer);
		strcat(str,buffer);
	}
	
	return str;
	
}
