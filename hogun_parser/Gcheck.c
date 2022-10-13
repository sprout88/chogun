//문자열이 GNGGA 로 시작하는지 체크해서 boolean 을 반환한다. 

#include <stdio.h>
#include <string.h>

int Gcheck(char* str){
	
	puts("Gchecking...\n");
	if(str[1] == 'G' && str[2] == 'N' && str[3] == 'G' && str[4] == 'G' && str[5] == 'A'){
		puts("its GString");
		return 1;
	}else{
		puts("its not GString");
		return 0;
	}
}
