#include <stdio.h>
#include <string.h>


int main(void){
	char str[] = "Hello,World,Nice";
	
	char* ptr;
	
	ptr = strtok(str,",");
	while(ptr!=NULL)
	{
		printf("%s\n",ptr);
		ptr = strtok(NULL,",");
	}
	return 0;
}
