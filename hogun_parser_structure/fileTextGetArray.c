//fgets�� ���� �������� ���Ͽ��� �ؽ�Ʈ�� �о�´�.
//fileTextGetArray�� ������ �������� 100*100 2���� char�迭�� ���ڿ��� ������ ��, 2�����迭 �����͸� ��ȯ�Ѵ�. 
 
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

