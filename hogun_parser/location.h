#include <stdio.h>
#include <string.h>

 typedef struct Location{
    	char latitudeStr[100];
    	char longitudeStr[100];
    	char altitudeStr[100];
    	
    	double average;
    	double min;
    	double max;
    	
    	bool isChecksum;
    	
	}Location;
	
static Location l[10000];



