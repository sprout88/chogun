//fgets�� ���� �������� ���Ͽ��� �ؽ�Ʈ�� �о�´�.
//fileTextGetAll�� �ؽ�Ʈ�� ��� �ؽ�Ʈ�� �о�´�.
 
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
