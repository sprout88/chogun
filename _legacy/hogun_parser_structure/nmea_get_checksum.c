#include <stdio.h>
#include <string.h>

#define NMEA_END_CHAR_1 '\n'
#define NMEA_MAX_LENGTH 70



char* nmea_get_checksum(const char *nmea_str)
{
    const char *n = NULL;
    int checksum = 0;
    
    if (strcmp(nmea_str[0], '$') == 0) 
	{
        n = nmea_str + 1; // skip '$' by plus one
    } else {
        n = nmea_str;
    }

    /* While current char isn't '*' or sentence ending (newline) */
    while ('*' != *n && NMEA_END_CHAR_1 != *n) {
        if ('\0' == *n || n - sentence > NMEA_MAX_LENGTH) {
            /* Sentence too long or short */
            return 0;
        }
        checksum ^= (int) *n;
        n++;
    }

    return checksum;
}


