#include <stdio.h>
#include <string.h>

int main(void){

	int a;
	a=puts("Hello");
	printf("%d\n",a); //puts�� 0�� ��ȯ�Ѵ�.
	
	while(puts("Hello")==0){
		puts("loop...");
	} 
	
} 
