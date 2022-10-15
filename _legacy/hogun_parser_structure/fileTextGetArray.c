//fgets는 개행 전까지만 파일에서 텍스트를 읽어온다.
//fileTextGetArray는 개행을 기준으로 100*100 2차원 char배열에 문자열을 저장한 후, 2차원배열 포인터를 반환한다. 
 
#include <stdio.h>
#include <string.h>
#include "StrArray.h"

StrArray* fileTextGetArray(FILE* fp){
	

	char buffer[1000]="";
	static StrArray s[1000];

	StrArray* ptr=&s;
	
	int i=0;
	int strCount=0;
	

	fgets(buffer,sizeof(buffer),fp);
	strcpy(s[0].str,buffer);
	
	while(fgets(buffer,sizeof(buffer),fp)!=NULL){
		puts(buffer);
		strcpy(s[0].str,buffer);
		i++;
		strCount++;
		
	}
	
	printf("number of textline : %d\n",strCount);
	
	return ptr;
	
}

