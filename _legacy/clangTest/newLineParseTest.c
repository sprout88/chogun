#include <stdio.h>
#include <string.h>

typedef struct String{
 	char str[1000];
	}String;

String s[1000]; 

int main(void){
	
	char str[1000] = "first,second,third,fourth";
	
	char* tok = strtok(str,",");
	
	int i=0;
	while(tok!=NULL){
		//puts(tok);
		strcpy(s[i].str,tok);
		tok=strtok(NULL,",");
		i++;
	}
	
	puts(s[0].str);
	puts(s[1].str);
	puts(s[2].str);
	puts(s[3].str);
	
	return 0;	
}
