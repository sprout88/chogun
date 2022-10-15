
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "location.h"
#include "GNGGAstr.h"
#include "StrArray.h"

#include "fopenCheck.c"
#include "fileTextGetAll.c"
#include "fileTextGetArray.c"

//만일 동적할당방식으로 코드를 수정하려면, fileTextGetArray를 수정해서 fileTextGetArrayDynamic을 구현한 후 사용하도록 한다. 

#include "GCheck.c"
#include "stringGrep.c"

#define DATA "dataShortExample.txt" //읽을 파일명 
#define RESULT "result.txt"



int main()
{
	FILE* fp = fopen(DATA,"rt");
	fopenCheck(fp);
	puts("");
	
	char* strArray = fileTextGetArray(fp); //파일의 모든 텍스트를 str에 저장 //strArray, strArray+1, strArray2 가 각 줄의 문자열 
	
	puts(strArray);

	
	//GNGGAstr g[100]; //가져온 문자열 중, GNGGA로 시작하는 문자열만 저장하기 위한 g 구조체 
	//Location location[100];
	
	//N앞이 위도, E앞이 경도, M앞이 고도
	 
}


