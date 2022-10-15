#include <stdio.h>
#include <string.h>

#include <memory.h>


typedef struct testStruct {
	char str[40];
	int age;
}testStruct;

int main(void){
	
	testStruct t1;
	strcpy(t1.str,"Hello World");
	
	
	testStruct **dPtr= (testStruct**)malloc(testStruct*1000000000);
	testStruct* ptr;
	
	dPtr[0]=ptr;
	
	ptr=&t1;
	
	puts(dPtr[0]->str);
	
	
	
	
	
	return 0;
}

