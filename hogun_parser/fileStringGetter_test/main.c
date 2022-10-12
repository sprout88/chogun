#include <stdio.h>

int main(void){
	
	FILE* fp = fopen("test.txt","rt");
	
	char buffer[1000];
	fgets(buffer,sizeof(buffer),fp);

	printf("%s\n",buffer);
	
	fclose(fp);
	return 0;
	
}
