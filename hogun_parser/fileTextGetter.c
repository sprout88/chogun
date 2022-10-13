#include <stdio.h>

void fileTextGet(FILE* fp){
	
	char buffer[1000];
	
	fgets(buffer,sizeof(buffer),fp);

	printf("%s\n",buffer);
	
	
}
