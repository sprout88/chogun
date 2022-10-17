
typedef struct Location{
	char latitudeStr[1000];
	char longitudeStr[1000];
	char altitudeStr[1000];
	
	double latitude;
	double longitude;
	double altitude;
	
	
}Location;

typedef struct LocationData{
	double sum;
	double subMax;
	double subMin;
	double avg;	
}LocationData;
