
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include "String.h"
#include "location.h"

#include "fopenCheck.c"
#include "fileTextGetOneLine.c"
#include "GNGGAcheck.c"
#include "parseDoubleCharFront.c"




#define DATA "dataShortExample.txt"
//#define DATA "data.txt"

char buffer[1000];



Location l;
Location initial;


LocationData latitude;
LocationData longitude;
LocationData altitude;


int main(void){
	
	
	FILE* fp = fopen(DATA,"rt");
	fopenCheck(fp);
	/*(
	strcpy(buffer,fileTextGetOneLine(fp));
	
	if(GNGGAcheck(buffer)){
	}else{
	}
	strcpy(buffer,fileTextGetOneLine(fp));

	
	if(GNGGAcheck(buffer)){
		strcpy(l.latitudeStr,parseDoubleCharFront(buffer,',','N'));
	}else{
	}
	*/
	char extractedStr[1000]="";
	char registerStr[1000]="";
	
	char *pos;// for strtod
	
	int i=0;
	//strcmp(extractedStr,registerStr)!=0
	
	//최대최소 계산을 위한 초깃값 설정
	latitude.subMax=0;
	
	
	
	
	int isInitial=1; // 초깃값 저장 판별용 
	while(1){
		
		strcpy(extractedStr,fileTextGetOneLine(fp));
		if(strcmp(extractedStr,registerStr)==0) break;
		strcpy(registerStr,extractedStr);

		//printf("%d번째 string : %s",i,extractedStr);
		
		if(GNGGAcheck(extractedStr)){
			if(isInitial){
				strcpy(initial.latitudeStr,parseDoubleCharFront(extractedStr,',','N'));
				strcpy(initial.longitudeStr,parseDoubleCharFront(extractedStr,',','E'));
				strcpy(initial.altitudeStr,parseDoubleCharFront(extractedStr,',','M'));
				
				
				initial.latitude = strtod(initial.latitudeStr,&pos);
				

				isInitial=0;
			}
			
			//puts("write!!");

			strcpy(l.latitudeStr,parseDoubleCharFront(extractedStr,',','N'));
			strcpy(l.longitudeStr,parseDoubleCharFront(extractedStr,',','E'));
			strcpy(l.altitudeStr,parseDoubleCharFront(extractedStr,',','M'));
			
			
			l.latitude = strtod(l.latitudeStr,pos);
			l.longitude = strtod(l.longitudeStr,pos);
			l.altitude = strtod(l.altitudeStr,pos);
			
			//printf("l.latitude : %.7lf\n",l.latitude);
			//printf("l.longitude : %.7lf\n",l.longitude);
			//printf("l.altitude : %.7lf\n",l.altitude);
			
			//printf("temp.latitude : %.7lf\n",l.latitude);
			//printf("temp.longitude : %.7lf\n",l.longitude);
			//printf("temp.altitude : %.7lf\n",l.altitude);
			
			// 최대최소 계산 로직
			printf("initial.latitude : %.7lf\n",initial.latitude);
			printf("l.latitude : %.7lf\n",l.latitude);
			latitude.subMax = fabs(initial.latitude - l.latitude);
			printf("sub = %.7lf\n",latitude.subMax);
			
		} 
		else{
			//puts("don't write");
		}		
		i++;
	}

	//결과 출력
	
	puts("");
	puts("");
	
	

	
	

	

	


	

	
	
}
