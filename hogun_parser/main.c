
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "location.h"
#include "GNGGAstr.h"
#include "StrArray.h"

#include "fopenCheck.c"
#include "fileTextGetAll.c"
#include "fileTextGetArray.c"

//���� �����Ҵ������� �ڵ带 �����Ϸ���, fileTextGetArray�� �����ؼ� fileTextGetArrayDynamic�� ������ �� ����ϵ��� �Ѵ�. 

#include "GCheck.c"
#include "stringGrep.c"

#define DATA "dataShortExample.txt" //���� ���ϸ� 
#define RESULT "result.txt"



int main()
{
	FILE* fp = fopen(DATA,"rt");
	fopenCheck(fp);
	puts("");
	
	char* strArray = fileTextGetArray(fp); //������ ��� �ؽ�Ʈ�� str�� ���� //strArray, strArray+1, strArray2 �� �� ���� ���ڿ� 
	
	puts(strArray);

	
	//GNGGAstr g[100]; //������ ���ڿ� ��, GNGGA�� �����ϴ� ���ڿ��� �����ϱ� ���� g ����ü 
	//Location location[100];
	
	//N���� ����, E���� �浵, M���� ��
	 
}


