
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

#include "String.h"
#include "location.h"
#include "GNGGAstr.h"

#include "fopenCheck.c"
#include "fileTextGetAll.c"

//만일 동적할당방식으로 코드를 수정하려면, fileTextGetArray를 수정해서 fileTextGetArrayDynamic을 구현한 후 사용하도록 한다. 

#include "GNGGAcheck.c"
#include "stringGrep.c"
#define DATA "data.txt" //읽을 파일명 
//#define DATA "dataShortExample.txt" //읽을 파일명 
#define RESULT "result.txt"



String origin_arr[];
String GNGGA_arr[];


int main()
{
	FILE* fp = fopen(DATA,"rt");
	fopenCheck(fp);


	char* origin_str = fileTextGetAll(fp); //파일의 모든 텍스트를 str에 저장 //strArray, strArray+1, strArray2 가 각 줄의 문자열 
	int i=0;
	int j=0;
	
	char* tok;
	tok=strtok(origin_str,"$");
	while(tok!=NULL){
		strcpy(origin_arr[i].str,tok);
		tok=strtok(NULL,"$");
		//puts(tok);
		//printf("%d저장됨!\n",i);
		i++;
	}
	
	//char* test1 = "$GNRMC,022427.20,A,3733.5415493,N,12659.6050908,E,0.019,,240822,,,R,V*06";
	//char* test2 = "$GNGGA,022427.80,3733.5415487,N,12659.6050887,E,4,12,0.50,49.024,M,18.475,M,0.8,0020*5F";
	//int testbool;
	
	for(i=0;i<1000;i++){
		printf("%d번째 : %s\n",i,origin_arr[i].str);
		//printf("%d번째 isGNGGA String? : %d\n",i,GNGGAcheck(origin_arr[i].str));
	}
	
/*
	for(i=0;i<1000;i++){
		if(GNGGAcheck(origin_arr[i].str)==1){
		strcpy(GNGGA_arr[j].str,origin_arr[i].str);
		puts(GNGGA_arr[j].str);
		j++;
		
	}}
	*/
}
	

	
	//GNGGAstr g[100]; //가져온 문자열 중, GNGGA로 시작하는 문자열만 저장하기 위한 g 구조체 
	//Location location[100];
	
	//N앞이 위도, E앞이 경도, M앞이 고도
	 



