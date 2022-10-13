
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "location.h"

#include "fopenCheck.c"
#include "fileTextGetAll.c"
#include "fileTextGetArray.c"

//만일 동적할당방식으로 코드를 수정하려면, fileTextGetArray를 수정해서 fileTextGetArrayDynamic을 구현한 후 사용하도록 한다. 

#include "GCheck.c"

 


#define DATA "dataShortExample.txt" //읽을 파일명 
#define RESULT "result.txt"



int main()
{
	FILE* fp = fopen(DATA,"rt");
	fopenCheck(fp);
	puts("");
	
	char* strArray = fileTextGetArray(fp); //파일의 모든 텍스트를 str에 저장 
	
	puts(strArray); //str 출력
	puts(strArray+1);
	puts(strArray+2);
	
	Location location[100]; 
	
		
}
