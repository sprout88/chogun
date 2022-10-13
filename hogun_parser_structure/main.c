
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "location.h"
#include "String.h"

#include "fopenCheck.c"
#include "fileTextGetAll.c"
#include "GNGGAcheck.c"



#define DATA "dataShortExample.txt" //읽을 파일명 

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
	//newLineStringList[i] 에 개행을 기준으로 잘려서 저장됨. 
	

	puts(newLineStringList[0].str);
	
	
	
	
	//s 구조체에 개행을 기준으로 저장
	
	//N앞이 위도, E앞이 경도, M앞이 고도
		
}
