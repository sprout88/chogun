
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "location.h"

#include "fopenCheck.c"
#include "fileTextGetter.c"
#include "GChecker.c"


#define DATA "dataShortExample.txt" //읽을 파일명 
#define RESULT "result.txt"



int main()
{
	FILE* fp = (DATA,"rt");
	fopenCheck(fp);
	
	
		
}
