
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "location.h"
#include "String.h"

#include "fopenCheck.c"
#include "fileTextGetAll.c"
#include "GNGGAcheck.c"



#define DATA "dataShortExample.txt" //���� ���ϸ� 

String newLineStringList[1000]; 
String commaStringList[1000];
Location locationList[1000];

int main()
{
	FILE* fp = fopen(DATA,"rt");
	fopenCheck(fp);
	puts("");
	
	
	char* tok=strtok(fileTextGetAll(fp),"\n");
	
	int i=0;
	while(tok!=NULL){
		strcpy(newLineStringList[i].str,tok);
		tok=strtok(NULL,"\n");
		i++;
	}
	//newLineStringList[i] �� ������ �������� �߷��� �����. 
	

	puts(newLineStringList[0].str);
	
	
	
	
	//s ����ü�� ������ �������� ����
	
	//N���� ����, E���� �浵, M���� ��
		
}
