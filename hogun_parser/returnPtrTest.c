#include <stdio.h>
#include <string.h>

char* testFunc(){
	static char str[100] = "Hello World";
	return str;
	
	
}

int main(void){
	
	char* ptr;
	ptr = testFunc();
	
	puts(ptr);

	
	return 0;	
}
