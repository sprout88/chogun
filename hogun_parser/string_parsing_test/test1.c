#include <stdio.h>

int main(void){
	
	char str[] = "Hello World!";
	//char* str = "Hello World!";
	char* ptr = str;
	
	str[0] = 'G';
	printf("%s\n",ptr);
	
	return 0;
	
		
}
