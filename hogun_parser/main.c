
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

#include "String.h"
#include "location.h"
#include "GNGGAstr.h"

#include "fopenCheck.c"
#include "fileTextGetAll.c"

//���� �����Ҵ������� �ڵ带 �����Ϸ���, fileTextGetArray�� �����ؼ� fileTextGetArrayDynamic�� ������ �� ����ϵ��� �Ѵ�. 

#include "GNGGAcheck.c"
#include "stringGrep.c"
#define DATA "data.txt" //���� ���ϸ� 
//#define DATA "dataShortExample.txt" //���� ���ϸ� 
#define RESULT "result.txt"



String origin_arr[];
String GNGGA_arr[];


int main()
{
	FILE* fp = fopen(DATA,"rt");
	fopenCheck(fp);


	char* origin_str = fileTextGetAll(fp); //������ ��� �ؽ�Ʈ�� str�� ���� //strArray, strArray+1, strArray2 �� �� ���� ���ڿ� 
	int i=0;
	int j=0;
	
	char* tok;
	tok=strtok(origin_str,"$");
	while(tok!=NULL){
		strcpy(origin_arr[i].str,tok);
		tok=strtok(NULL,"$");
		//puts(tok);
		//printf("%d�����!\n",i);
		i++;
	}
	
	//char* test1 = "$GNRMC,022427.20,A,3733.5415493,N,12659.6050908,E,0.019,,240822,,,R,V*06";
	//char* test2 = "$GNGGA,022427.80,3733.5415487,N,12659.6050887,E,4,12,0.50,49.024,M,18.475,M,0.8,0020*5F";
	//int testbool;
	
	for(i=0;i<1000;i++){
		printf("%d��° : %s\n",i,origin_arr[i].str);
		//printf("%d��° isGNGGA String? : %d\n",i,GNGGAcheck(origin_arr[i].str));
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
	

	
	//GNGGAstr g[100]; //������ ���ڿ� ��, GNGGA�� �����ϴ� ���ڿ��� �����ϱ� ���� g ����ü 
	//Location location[100];
	
	//N���� ����, E���� �浵, M���� ��
	 



