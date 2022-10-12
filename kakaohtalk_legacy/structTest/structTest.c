#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stock{
	
};


int main()
{
	
	typedef struct Student{
		char str[100];
	}Student;
   
   Student StudentArr[100];
   
   strcpy(StudentArr[0].str,"Hello world");
   
   printf("%s\n",StudentArr[0]);
   
    system("PAUSE");
    return 0;
    
    
    
	
}
