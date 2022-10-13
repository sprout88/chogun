#include <stdio.h>
#include <string.h>

int main(void){
	
	char arr[][100] = {"Hello World","Im john","nice to meet you"}; //3행 100열 구조 
	
	printf("%s\n",arr[0]); //0행0열을 s로 출력 : Hello World 
	printf("%s\n",arr[1]); //0행1열을 s로 출력 :  
	printf("%s\n",arr[2]); 
}
