#include <stdio.h>
#include <string.h>


char* reverseString(char* str){
	int size = (int)strlen(str);
	//printf("size: %d\n",size/2);
	
	static char reversedStr[1000];
	strcpy(reversedStr,str);
	
	char temp; 
	int i =0;
	for(i=0;i<size/2;i++){
		temp=reversedStr[i];
		reversedStr[i]=reversedStr[(size-1)-i];
		reversedStr[(size-1)-i] = temp;
	}
	return reversedStr;
	
}


char* parseDoubleCharFront(char* str,char c1, char c2){
	static char extractedStr[1000]="";
	static char reversedStr[1000];
	
	int i;
	int j;
	int k;
	
	for(i=0;i<strlen(str);i++){
		if(str[i+1]==c1&&str[i+2]==c2){
			j=i;
			k=0;	
			while(str[j]!=c1){
				//returnStr[j]=str[j];
				extractedStr[k]=str[j];
				j--;
				k++;
			}
		}		
	}
	strcpy(reversedStr,reverseString(extractedStr));
	return reversedStr;
}


/*
int main(){
	
	char* str = "$GNRMC,022426.80,A,3733.5415497,N,12659.6050888,E,0.010,,240822,,,R,V*09";
	char strExtracted[1000];
	
	puts(str);

	strcpy(strExtracted,parseDoubleCharFront("$GNGGA,022426.80,3733.5415497,N,12659.6050888,E,4,12,0.50,49.027,M,18.475,M,0.8,0020*53",',','N'));
	puts(strExtracted);

	char* str2 = "$GNGGA,022427.00,3733.5415488,N,12659.6050902,E,4,12,0.50,49.027,M,18.475,M,1.0,0020*5E";
	puts(str2);

	strcpy(strExtracted,parseDoubleCharFront("$GNGGA,022426.80,3733.5415497,N,12659.6050888,E,4,12,0.50,49.027,M,18.475,M,0.8,0020*53",',','N'));
	puts(strExtracted);	
	
}
*/
