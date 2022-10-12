#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DATA "data.txt" 
#define RESULT "result.txt"



int main()
{
    FILE* fp; 
	
	FILE* result;

    char info[200] = "";
    
    char tempStr[200]="";
    
    typedef struct Temp{
    	char tempStr[100];
	}Temp;
    
    typedef struct Location{
    	char latitudeStr[100];
    	char longitudeStr[100];
    	char altitudeStr[100];
	}Location;
	
	Location LocationArr[100];
	Temp tempArr[500];
	
    
    fp = fopen(DATA, "rt");
    result = fopen("result.txt", "wt");
    
    if(fp==NULL){
    	printf("#%s# 파일이 존재하지않습니다.\n\n",DATA);
	}else{
		printf("#%s# 파일 읽기 성공...\n\n",DATA);
	}
    

     if(result==NULL){
    	printf("#%s# 파일 생성 실패..\n\n",RESULT);
	}else{
		printf("#%s# 파일 생성 성공..\n\n",RESULT); 
	} 
    
    
	int i=0; 
	
	
	
    while (!feof(fp))
    {
        fscanf(fp, "%s", info);
        
    	if(info[1] == 'G' && info[2] == 'N' && info[3] == 'G' && info[4] == 'G' && info[5] == 'A'){
    		//printf("GNGGA문자열 : %s\n",info);
    		
    		char* tok=strtok(info,",");
    		int i =0;
    		while(tok!=NULL){
    			printf("%s\n",tok);
    			strcpy(tempArr[i].tempStr,tok);
    			tok=strtok(NULL,",");
    			i++;
			}
		}
	}
	
		
	puts("\n");
	
	fclose(fp);
	fclose(result);
	system("PAUSE");
	return 0;
}
