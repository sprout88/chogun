#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Gchecker.c"
	
#define DATA "data.txt" 
#define RESULT "result.txt"


int main()
{
	char Gstr1[]="$GNGGA,022427.00,3733.5415488,N,12659.6050902,E,4,12,0.50,49.027,M,18.475,M,1.0,0020*5E";
	
	Gcheck(Gstr1);	
	
	
    return 0;
}
