#include <stdio.h>
#include <string.h>

int main(void){
	char a[3][10] ={
	"abcdef",
	"xyz",
	"hello",
	};
	//���� 3����, ���� 10����� ��.

	puts(a[0]); //a�� 0������ �����Ѵٴ� ��. ��, abcdef
	puts(a[1]); //a�� 1������ �����Ѵٴ� ��. ��, xyz
	puts(a[2]); //a�� 2������ �����Ѵٴ� ��. ��, hello

	printf("%c\n",a[0][2]); //a�� 0����,2������ �����Ѵٴ� ��. ��, c
	printf("%c\n",a[1][2]); //a�� 0����,2������ �����Ѵٴ� ��. ��, z
	
}
