//fgets �� ���پ� �о���� 

#include <stdio.h>
#include <string.h>

 
char* fileTextGetOneLine(FILE* fp){
	
	static char buffer[10000];
	
	fgets(buffer,sizeof(buffer),fp);
	
	return buffer;	
	
	
	
}


