#include <stdio.h>
#include <string.h>

int main(void){

	int a;
	a=puts("Hello");
	printf("%d\n",a); //puts는 0을 반환한다.
	
	while(puts("Hello")==0){
		puts("loop...");
	} 
	
} 
