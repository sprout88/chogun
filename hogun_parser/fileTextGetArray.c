//fgets는 개행 전까지만 파일에서 텍스트를 읽어온다.
//fileTextGetArray는 개행을 기준으로 100*100 2차원 char배열에 문자열을 저장한 후, 2차원배열 포인터를 반환한다. 
 
#include <stdio.h>
#include <string.h>



char* fileTextGetArray(FILE* fp){
	
	char buffer[1000]="";
	static char strArray[1000][1000];
	
	int i=0;
	int strCount=0;
	

	fgets(buffer,sizeof(buffer),fp);
	strcpy(strArray+i,buffer);
	
	while(fgets(buffer,sizeof(buffer),fp)!=NULL){
		puts(buffer);
		strcpy(strArray+i,buffer);
		strCount++;
		
	}
	
	printf("number of textline : %d\n",strCount);
	
	return strArray;
	
}

