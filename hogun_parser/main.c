
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "location.h"

#include "fopenCheck.c"
#include "fileTextGetAll.c"
#include "fileTextGetArray.c"

//���� �����Ҵ������� �ڵ带 �����Ϸ���, fileTextGetArray�� �����ؼ� fileTextGetArrayDynamic�� ������ �� ����ϵ��� �Ѵ�. 

#include "GCheck.c"

 


#define DATA "dataShortExample.txt" //���� ���ϸ� 
#define RESULT "result.txt"



int main()
{
	FILE* fp = fopen(DATA,"rt");
	fopenCheck(fp);
	puts("");
	
	char* strArray = fileTextGetArray(fp); //������ ��� �ؽ�Ʈ�� str�� ���� 
	
	puts(strArray); //str ���
	puts(strArray+1);
	puts(strArray+2);
	
	Location location[100]; 
	
		
}
