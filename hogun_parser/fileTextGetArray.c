//fgets�� ���� �������� ���Ͽ��� �ؽ�Ʈ�� �о�´�.
//fileTextGetArray�� ������ �������� 100*100 2���� char�迭�� ���ڿ��� ������ ��, 2�����迭 �����͸� ��ȯ�Ѵ�. 
 
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

