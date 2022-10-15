#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 

void fopenCheck(FILE* fp){
	
	
	 if(fp==NULL){
    	printf("파일이 존재하지않습니다.\n");
	}else{
		printf("파일 읽기 성공...\n");
	}
}

