
#include <stdio.h>
#include <string.h>

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
	
	int i=0;
	//strcmp(extractedStr,registerStr)!=0
	while(1){
		
		strcpy(extractedStr,fileTextGetOneLine(fp));
		if(strcmp(extractedStr,registerStr)==0) break;
		strcpy(registerStr,extractedStr);

		printf("%d¹øÂ° string : %s",i,extractedStr);
		
		if(GNGGAcheck(extractedStr)){
			puts("write!!");
			strcpy(l.latitudeStr,parseDoubleCharFront(extractedStr,',','N'));
			strcpy(l.longitudeStr,parseDoubleCharFront(extractedStr,',','E'));
			strcpy(l.altitudeStr,parseDoubleCharFront(extractedStr,',','M'));
						
			printf("latitude : %s\n",l.latitudeStr);
			printf("longitude : %s\n",l.longitudeStr);
			printf("altitude : %s\n",l.altitudeStr);			
			
			strcpy(l.latitudeStr,"");
			strcpy(l.altitudeStr,"");
			strcpy(l.longitudeStr,"");
		} 
		else{
			puts("don't write");	
		}		
		i++;
	}


	
	

	

	


	

	
	
}
